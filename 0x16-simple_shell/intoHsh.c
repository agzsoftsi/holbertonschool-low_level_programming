#include "shell.h"
int _Wait(char **argv, char *command, int QExecutes);
/**
 * intoHsh - Start the shell, process, loop of instructions
 * @env:  array enviroment
 * @argv: array arguments
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void intoHsh(char **env, char **argv)
{
	size_t sizebuf;
	char *command = NULL;
	pid_t pid;
	int indBuilt = 0;
	static int status;
	static int Qexecutes = 1;
	ssize_t QcharComm;

	command = NULL;
	_prompt();
	while ((QcharComm = getline(&command, &sizebuf, stdin)) != EOF)
	{
		if (_strcmp(command, "\n") != 0)
		{
			indBuilt = Builtin(command, env, status);
			if (indBuilt == CHANGE_DIR)
			{	free(command);
				command = NULL;
				continue;
			};
			if (indBuilt == EXIT_SHELL)
			{	free(command);
				exit(0);
			}
			pid = fork();
			if (pid > 0)
			{
				status = _Wait(argv, command, Qexecutes);
				Qexecutes++;
			}
			else if (pid == 0)
				{
				execute(command, env);
				}
			if (pid == -1)
				perror("Error fork");
		}
		else
		{	free(command);
			command = NULL;
		}
		_prompt();
	}
	free(command);
	if (status != 0)
		exit(status);
}
/**
 * execute - execute command whith enviroment
 * @command: take a command
 * @env: enviroment
 * Return: void
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void execute(char *command, char **env)
{
	char **param;
	int indEx = 0;
	char *comm;

	comm = strdup(command);
	removeSpaces(comm);
	if (_strlen(comm) == 1)
	{
		free(comm);
		_exit(0);
	}
	free(comm);

	param = ParseCommand(command, " ");
	if (param != NULL)
	{
		if (_strcmp(param[0], "env") == 0)
		{
			_printenv(env);
			/*free(param); VALGRIND*/
		} else
		{
			indEx = _exec(param, env);
			if (indEx == 1)
			{
				free(command);
				free(param);
				_exit(127);
			}
			else if (indEx == 2)
			{
				free(command);
				free(param);
				_exit(126);
			}

		}

		free(command);
	}
	free(param); /*valgrind*/
	_exit(0);
}
/**
 * _Wait - Wait for de child process and eval status
 * @argv: line command args to print name exe shell
 * @command: command to execute
 * @Qex: Executions Quantity
 * Return: return status process
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int _Wait(char **argv, char *command, int Qex)
{
	int status;
	char **ParsedCom;

	wait(&status);
	if (WIFEXITED(status))
	{
		ParsedCom = ParseCommand(command, " ");
		if (WEXITSTATUS(status) == 126)
			errors(argv[0], ParsedCom[0], PERM_DENIED, Qex);

		if (WEXITSTATUS(status) == 127)
			errors(argv[0], ParsedCom[0], NOT_FOUND, Qex);

		/*unknow errors*/
		if (WEXITSTATUS(status) != 127 &&
		    WEXITSTATUS(status) != 126 &&
		    WEXITSTATUS(status) != 2 &&
		    WEXITSTATUS(status) != 0)
			perror("");

		free(ParsedCom);
	}
return (WEXITSTATUS(status));
}

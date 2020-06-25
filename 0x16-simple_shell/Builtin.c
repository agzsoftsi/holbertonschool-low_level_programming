#include "shell.h"
/**
 * Builtin - Evaluate Buitins
 * @command:  line of command
 * @env: var enviroments
 * @status: status process
 * Return: 1 CD DONE, 2 EXIT DONE, 0 NO ONE
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int Builtin(char *command, char **env, int status)
{
	char **cdCommand = NULL;
	size_t sizeDirBuf = 512;
	static char *currDir;
	static char currDirector[512];
	static int countAlloc;

	if (_strncmp(command, "cd", 2) == 0)
	{	cdCommand = ParseCommand(command, " ");
		if (_strncmp(cdCommand[0], "cd", 2) == 0)
		{
			if ((cdCommand[1] == NULL) || (_strncmp(cdCommand[1], "-", 1) == 0))
			{
				if (cdCommand[1] == NULL)
					cdCommand[1] = _GetEnv("HOME", env);
				else
				{
					if (_strncmp(cdCommand[1], "-", 1) == 0)
					{
					if (chdir(currDirector))
						perror("Error:<chdir>");
					free(cdCommand);
					_prompt();
					return (1);
					}
				}
			}
			currDir = getcwd(currDirector, sizeDirBuf);
			if (currDir == NULL)
				perror("Error <getcwd>");
			else
				countAlloc++;
			if (chdir(cdCommand[1]))
				perror("Error:<chdir>");
		}
		free(cdCommand);
		_prompt();
		return (1);
	} /*CD LOGICAL*/
return (BuiltExit(command, status));
}

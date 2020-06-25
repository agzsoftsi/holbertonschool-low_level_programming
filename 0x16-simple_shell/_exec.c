#include "shell.h"
/**
 * _exec - Execute command
 *@param : command parsed
 *@env: Enviroment
 *Return: 0 succed, 1 not found, 2 permision denied
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int  _exec(char **param, char **env)
{
	int ex;
	int ResultPath;
	int i = 0;

	ResultPath = _path(param, env);


	if (!ResultPath)
	{


		for (i = 0; param[i] != NULL; i++)
		{
			removeSpaces(param[i]);
		}
		if (_strcmp(param[i - 1], "") == 0)
			param[i - 1] = NULL;

		ex = execve(param[0], param, env);

		if (ex == -1)
		{
			return (2);
		}
	}
	else
	{
		return (1);
	}

	/*free(param); VALGRIND*/
	return (0);
}

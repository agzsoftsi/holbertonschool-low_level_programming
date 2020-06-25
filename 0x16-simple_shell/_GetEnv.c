#include "shell.h"
/**
 * _GetEnv - obtain value of a enviroment var
 * @var: name of enviroment var
 * @env: enviroment
 * Return: value of enviroment var
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
char *_GetEnv(char *var, char **env)
{

	char **enviroment;
	char *ValuePos;
	size_t len = 0;

	len = _strlen(var);

	for (enviroment = env; *env != NULL; env++)
	{
		if (_strncmp(var, *env, len) == 0)
		{
			ValuePos = _strchr(*env, '=');
			ValuePos++;
			break;
		}
	*enviroment = *env;
	}
return (ValuePos);
}

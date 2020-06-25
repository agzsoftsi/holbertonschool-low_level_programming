#include "shell.h"
/**
 * _printenv- print enviroment var
 *@env: array enviroment var
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void _printenv(char **env)
{
	char **isEnv;


	for (isEnv = env; *env != NULL; env++)
	{
		*isEnv = *env;
		_puts(*isEnv);
	}
}

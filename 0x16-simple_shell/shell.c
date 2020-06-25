#include "shell.h"

/**
 * main - shell init program
 * @argc: Number of Arguments
 * @argv: Array of arguments
 * @env:  Array enviroment
 * Return: Return 0
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int main(int argc, char *argv[], char **env)
{

	if (argc == 1)
	{
		intoHsh(env, argv);
	}
	else
	{
		/* en esta opcion es para ejecutar shells */
		/* el sh intenta ejecutar inmediatamente */
		if (_exec(++argv, env))
			exit(127);
	}

	return (0);
}

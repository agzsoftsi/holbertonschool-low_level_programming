#include "shell.h"

/**
 * _path - search its path os a command
 * @param: command to search.
 * @env: environment variable
 * Return: nothing.
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 */

int _path(char **param, char **env)
{
	struct stat st;
	char *path1 = malloc(512);
	char *PATH;
	char **PathParsed;
	char **Directories;
	int indNIL = 0;
	int i = 0;

	PATH = _GetEnv("PATH", env);
	PathParsed = ParseCommand(PATH, "=");
	Directories = ParseCommand(PathParsed[0], ":");

	for (i = 0; Directories[i] != NULL; i++)
	{
		_strcpy(path1, Directories[i]);
		_strcat(path1, "/");
		_strcat(path1, param[0]);
		removeSpaces(path1);

		if (stat(path1, &st) == 0)
		{
			param[0] = _strdup(path1);
			break;

		}
		if (stat(param[0], &st) == 0)
		{
			break;
		}

		_strcpy(path1, "");
	}
	if (Directories[i] == NULL)
		indNIL = 1;
	free(PathParsed);
	free(Directories);
	free(path1);
	return (indNIL);
}

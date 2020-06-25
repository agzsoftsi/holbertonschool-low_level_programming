#ifndef SHELL_H
#define SHELL_H
/**
 * Header File - shell.h
 * CISHELL v1.0
 * Authors: Carlos Andres Garcia - Ivan Dario Lasso
 * Cohort: 10 - Cali
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/stat.h>
#include <limits.h>
#define CHANGE_DIR 1
#define EXIT_SHELL 2
#define PERM_DENIED "Permission denied"
#define NOT_FOUND "not found"
int _atoi(char *s);
void removeSpaces(char *str);
void reverse(char *str, int len);
int intToStr(int x, char str[]);
void _puts(char *str);
void errors(char *program, char *param, char *message, int Qexe);
void intoHsh(char **env, char **argv);
char **ParseCommand(char *command, char *separator);
void _prompt(void);
int _exec(char **param, char **env);
void _printenv(char **env);
int Builtin(char *command, char **env, int status);
char *_GetEnv(char *var, char **env);
int _path(char **param, char **env);
void execute(char *command, char **env);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
int _Wait(char **argv, char *command, int QExecutes);
int BuiltExit(char *command, int status);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
int _putchar(char c);
#endif

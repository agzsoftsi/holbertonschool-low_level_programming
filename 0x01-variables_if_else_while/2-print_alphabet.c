#include<stdio.h>
/**
 *main - show alphabet lowercase
 *@void: no arguments
 *Return: 0
**/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}

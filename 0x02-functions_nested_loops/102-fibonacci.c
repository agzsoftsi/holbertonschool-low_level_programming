#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * @void: no argument
 * Return: 0
 */
int main(void)
{
long int con, act = 2, ant = 1, sum = 0;

printf("%lu, ", ant);
printf("%lu, ", act);

for (con = 3; con < 49; con++)
{
sum = ant + act;
ant = act;
act = sum;

if (con < 48)
printf("%lu, ", sum);
else
printf("%lu\n", sum);
}
return (0);
}

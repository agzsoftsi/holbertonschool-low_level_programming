#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * @void: void
 * Return: 0
 */
int main(void)
{
long int second = 2, first = 1, sum = 0, con;

printf("%lu, ", first);
printf("%lu, ", second);

for (con = 3; con < 50; con++)
{
sum = first + second;
first = second;
second = sum;
if (con < 48)
{
printf("%lu, ", sum);
}
else
{
printf("%lu\n", sum);
}
}
return (0);
}

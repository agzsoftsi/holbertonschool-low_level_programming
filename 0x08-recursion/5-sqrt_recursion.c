#include "holberton.h"
/**
 *_sqrt_recursion - square root
 *@n: integer
 *Return: value squeare
 */
int _sqrt_recursion(int n)
{
return (_sqrt2(1, n));
}
/**
 *_sqrt2 - find square
 *@a: integer
 *@b: integer
 *Return: value square
 */
int _sqrt2(int a, int b)
{
if (a * a > b)
return (-1);
else if (a * a == b)
return (a);
else
return (_sqrt2(a += 1, b));
}

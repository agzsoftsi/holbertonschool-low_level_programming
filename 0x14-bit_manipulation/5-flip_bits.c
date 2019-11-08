#include "holberton.h"
/**
 * flip_bits - # of bits you would need to flip to get fr one # to another
 * @n: takes in an integer
 * @m: takes in the 2nd integer to compare
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int con, index;
unsigned long int num;
index = (sizeof(unsigned long int) * 8) - 1;
num = n ^ m;

for (con = 0; index >= 0; index--)
{
if (((num >> index) &1) == 1)
{
con += 1;
}
}
return (con);
}

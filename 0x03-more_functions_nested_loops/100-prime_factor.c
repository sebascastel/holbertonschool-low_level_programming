#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int a;
unsigned long int b;
unsigned long int c;
unsigned long int d;
unsigned long int e;

c = 612852475143;
e = 0;
for (a = 2; a <= 15; a++)
{
if (c % a == 0)
{
d = 1;
for (b = 2; b <= a / 2; b++)
{
if (a % b == 0)
d = 0;
}
if (d == 1)
{
if (a > e)
e = a;
}
}
}
printf("%lu\n", e);
return (0);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}

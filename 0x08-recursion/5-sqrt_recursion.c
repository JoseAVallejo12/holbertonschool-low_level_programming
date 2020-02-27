#include "holberton.h"

/**
 *root - find raiz of number n
 *@n: number
 *@a: interacion
 *Return: Always integer
 */

int root(int a, int n)
{
	if (a * a  == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (root(a + 1, n));
}

/**
 *_sqrt_recursion - square natural of a number
 *@n: base number
 *Return: Always integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(1, n));

}


#include "holberton.h"

int len(char *s)
{
	int i = 0;
	while(*(s++))
		i++
}
/**
 *is_palindorme - check palindrome world
 *@s: Array in
 *REturn: Always integer
 *Descripcion: If s is palindrome return 1 else 0
 */

int is_palindrome(char *s)
{
	int count;
	char *start, *end;
	if (count
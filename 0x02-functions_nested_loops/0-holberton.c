#include<stdio.h>
#include<stdlib.h>
#include "holberton.h"

/*
 *
 * comentario
 */


int main(void)
{
	char c[9]={'h','o','l','b','e','r','t','o','n'};
	for(int a = 0; a <= 8; a++){
		_putchar(c[a]);
	}
	putchar('\n');

	return (0);
}
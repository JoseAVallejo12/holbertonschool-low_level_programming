#ifndef FUNTION_POINTER_H
#define FUNTION_POINTER_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif

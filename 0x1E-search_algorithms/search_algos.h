#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Estand librery includes */
#include <stdio.h>
#include <stdlib.h>

/* Prototype of funtions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
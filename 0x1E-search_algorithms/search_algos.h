#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print(int start, int end, int *array);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif 

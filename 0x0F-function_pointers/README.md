1. File: 0-print_name.c
	a function that prints a name

2. File: 1-array_iterator.c
	 a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

3. 3-calc.h

This file should contain all the function prototypes and data structures used by the program

4. 3-op_functions.c

This file contains the 5 following functions (not more):

op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

5. 3-get_op_func.c

This file contains the function that selects the correct function to perform the operation asked by the user

6. 3-main.c
	contains the main function `

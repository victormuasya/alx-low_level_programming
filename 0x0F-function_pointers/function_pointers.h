#ifndef DE4FB20A_5FA0_425C_824C_A7C68732CFBF
#define DE4FB20A_5FA0_425C_824C_A7C68732CFBF
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * AUth: victor
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers directory.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif

#endif /* DE4FB20A_5FA0_425C_824C_A7C68732CFBF */

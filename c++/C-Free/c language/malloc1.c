//C malloc()
//The function malloc() reserves a block of memory of specified size and return a pointer 
//of type void which can be casted into pointer of any form.
//Syntax of malloc()
//ptr = (cast-type*) malloc(byte-size)
//ex-ptr = (int*) malloc(100 * sizeof(int));
//This statement will allocate either 200 or 400 according to size of int 2 or 4 bytes 
//respectively and the pointer points to the address of first byte of memory.
#include<stdio.h>
C calloc()
The name calloc stands for "contiguous allocation".

The only difference between malloc() and calloc() is that, malloc() allocates single block of memory whereas calloc() allocates multiple blocks of memory each of same size and sets all bytes to zero.

Syntax of calloc()
ptr = (cast-type*)calloc(n, element-size);
This statement will allocate contiguous space in memory for an array of n elements. For example:

ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for an array of 25 elements each of size of float, i.e, 4 bytes.
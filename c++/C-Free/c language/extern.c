// when we write int a; this represent both declaration and definition
//when something is delared memmory is not aloocated on definition it is allocated as 
//in case of functions
//in function defintion there is already a virtual extern
//but if we write // extern int a; it only declares which means memory is not allocated

#include<stdio.h>
extern int a;
int main()
{
 a=10; //program wont compile because a is only declared and not defiened	
}
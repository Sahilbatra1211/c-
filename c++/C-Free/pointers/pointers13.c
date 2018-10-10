//An array of pointers can even contain the addresses of other arrays
#include<stdio.h>
int main()
{
	static int a[ ] = { 0, 1, 2, 3, 4 } ;
	int *p[ ] = { a, a + 1, a + 2, a + 3, a + 4 } ;
	printf ( "\n%u %u %d", p, *p, * ( *p ) ) ; 
}
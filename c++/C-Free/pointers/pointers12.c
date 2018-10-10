/*Array of Pointers-The addresses present in the array of pointers can be addresses of 
                 isolated variables or addresses of array elements or any other addresses.*/
#include<stdio.h>
int main()
{
	int *arr[4]; //arary iof pointers
	
	int i = 31, j = 5, k = 19, l = 71, m ;

	arr[0] = &i ; 
	arr[1] = &j ; 
	arr[2] = &k ; 
	arr[3] = &l ;
for ( m = 0 ; m <= 3 ; m++ )
 printf ( "%d ", * ( arr[m] ) ) ;
  }
                 
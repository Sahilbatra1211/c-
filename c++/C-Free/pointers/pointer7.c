/* This is how we would declare the above array in C,
int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
We also know that on mentioning the name of the array we get its base address. Thus, by 
saying *num we would be able to refer to the zeroth element of the array, that is, 24. One
can easily see that *num and *( num + 0 ) both refer to 24.
Similarly, by saying *( num + 1 ) we can refer the first element of the array, that is, 
34. In fact, this is what the C compiler does internally. When we say, num[i], the C compiler
internally converts it to *( num + i ). This means that all the following notations 
are same:
num[i] 
*( num + i ) 
*( i + num ) 
i[num]
*/
#include<stdio.h>
int main()
{
	int a[ ] = { 24, 34, 12, 44, 56, 17 } ;
	 int i ;
	for ( i = 0 ; i <= 5 ; i++ ) 
	{
		 printf ( "\naddress = %u ", &a[i] ) ; 
		 printf ( "element = %d %d ", a[i], *( a + i ) ) ;
	     printf ( "%d %d", *( i + a ), i[a] ) ; 
    }
	
}

// declaration of an array
// array- a[]={1,2,3};
//		  a[3]={1,2,3};
//paaisng an array by call by refrence
#include<stdio.h>
disp ( int *n )
 { 
	 printf("\n%d",*n) ;
 }
int main()
{ 	int i ; 
	int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;

	for ( i = 0 ; i <= 6 ; i++ )
	 disp ( &marks[i] ) ;
}

 
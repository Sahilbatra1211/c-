/*two ways of declaring 2d arrays
int stud[4][2] = {  { 1234, 56 }, 
					{ 1212, 33 }, 
					{ 1434, 80 }, 
					{ 1312, 78 } 
                 } ;
int stud[4][2] = { 1234, 56, 1212, 33, 1434, 80, 1312, 78 } ;

Thus the declarations,
int arr[2][3] = { 12, 34, 23, 45, 56, 45 } ;
int arr[ ][3] = { 12, 34, 23, 45, 56, 45 } ;
are perfectly acceptable,
whereas,
int arr[2][ ] = { 12, 34, 23, 45, 56, 45 } ; 
int arr[ ][ ] = { 12, 34, 23, 45, 56, 45 } ;
would never work.

2-d array is an array of array.
suppose s[3][2] be an array 
if we print s[i] it will give adress of all rows
*/

#include<stdio.h>
int main()
{ 
int i,s[3][2];

for(i=0;i<3;i++)
{
	printf("\n%d",s[i]);
	printf("\n%d",*(s+i));
	
}
	
}
//three ways are here in which 2-d array can be passed to a function
//three ways are given below
// here see the difference between show function and display function 
// dislay()- in system 2d array is stored as a 1d array therfore i*c+j is used 
//show()-if we make pointer to an array suppose (*q)[4]  (remember 4 here shows the no of elements to be stored in each row)then q+1 stores adress of row 2 and *(*(q+2)+1) stores adress of first element  
//print()- q[][4]  is equivalent to (*q)[4]
#include<stdio.h>
display ( int *q, int row, int col )
{
int i, j ;
for ( i = 0 ; i < row ; i++ )
{
	for ( j = 0 ; j < col ; j++ )
		printf ( "%d ", * ( q + i * col + j ) ) ;
		printf ( "\n" ) ;
}
		printf ("\n" ) ;
}
display1 ( int *q, int row, int col )
{
int i;
for ( i = 0 ; i < (row*col) ; i++ )
{

		printf ( "%d ", *q ) ;
		q++;
		
}
		printf ("\n" ) ;
}

show ( int ( *q )[4], int row, int col )
{
	int i, j ;
	int *p ;
	for ( i = 0 ; i < row ; i++ )
	{
		p = q + i ;
			for ( j = 0 ; j < col ; j++ )
				printf ( "%d ", * ( p + j ) ) ;
				printf ( "\n" ) ;
	}
			printf ( "\n" ) ;
}

print ( int q[ ][4], int row, int col )
{
int i, j ;
	for ( i = 0 ; i < row ; i++ )
	{
		for ( j = 0 ; j < col ; j++ )
			printf ( "%d ", q[i][j] ) ;
			printf ( "\n" ) ;
}
			printf ( "\n" ) ;
}		




int main( )
{
int a[3][4] = {
1, 2, 3, 4,
5, 6, 7, 8,
9, 0, 1, 6
} ;


display ( a, 3, 4 ) ;
display1 ( a, 3, 4 ) ;
show ( a, 3, 4 ) ;

print ( a, 3, 4 ) ;
}

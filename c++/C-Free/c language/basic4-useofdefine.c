//# define N   ->preprocessor statements
// N remains constant tthrough outt the program and we cannot change its value in between
// these statements aree not ended witth a semicolon and these are known as preprocessor statements which means
// tthese are compiled before the copilation of program
#include<stdio.h>
#define N 20
int main()
{   
	int a,b;
	
	scanf("%d",&b);
	a=b*N;
	printf("a=%d",a);
	
	
}
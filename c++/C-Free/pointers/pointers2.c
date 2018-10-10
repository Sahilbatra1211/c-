//pointer containing adress of another pointer
#include<stdio.h>
int main()
{
	int a=5,*p,**k;
	p=&a;
	k=&p;
	
	printf("\n%d",a);
	printf("\n%d",*p);
	printf("\n%d",*(*(k)));
}
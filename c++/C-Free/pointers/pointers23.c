//returning an array can not be done in c while we can doit using pointer
#include<stdio.h>

int *returningarr()
{	
	int a[4]={1,2,3,4};
	
	return a;
	
}

int main()
{
	int *p;
	p=returningarr();
	printf("%d",*p);
	p++;
	printf("%d",*p);
	
}
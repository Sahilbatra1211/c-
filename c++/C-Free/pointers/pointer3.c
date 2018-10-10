//call by refrence
//application- we cannot return two values from a function but we can do by using callbyrefrence
#include<stdio.h>

void callbyrefrence(int *x,int *y)       // this is not call by refrence-> void call(int &x,int &y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}



int main()
{	int a,b;
	printf("enter the no to be swapped");
	scanf("%d%d",&a,&b);
	callbyrefrence(&a,&b);
	printf("\n%d%d",a,b);
	
}
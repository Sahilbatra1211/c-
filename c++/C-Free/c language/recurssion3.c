#include<stdio.h>

int revno(int n)
{	if(n==0)
	{
		return 1;
	}
	int c=n%10;
	printf("%d",c);
	revno(n/10);	
}
int main()
{
	printf("enter the no");
	int n;
	scanf("%d",&n);
	int d=revno(n);
	
}
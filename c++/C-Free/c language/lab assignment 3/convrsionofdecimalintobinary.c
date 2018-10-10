#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,c,d[100],e=0;
	printf("enter a no ");
	scanf("%d",&a);
	
	for(i=0;a!=0;i++)
	{
		d[i]=a%2;
		a=a/2;
		e++;
	}
	
	for(i=0;i<e;i++)
	{
		printf("%d",d[e-i-1]);
	}
	
}
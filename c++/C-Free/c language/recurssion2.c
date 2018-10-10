#include<stdio.h>

int fibrecc(int n)
{
	if(n==1||n==2)
	{
		return(1);
	}
	return(fibrecc(n-1)+fibrecc(n-2));
	
}




int main()
{printf("enter the limit");
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf(" %d",fibrecc(i));
}	
}
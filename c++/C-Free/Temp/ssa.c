#include<stdio.h>
int main()
{
	int a[100],i,temp;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
	}
	
	for(i=0;i<4;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}
	printf("largest%d",a[4]);
	printf("smallest%d",a[0]);
}
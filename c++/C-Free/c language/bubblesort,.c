//bubble sort
#include<stdio.h>
int main()
{
	int i,j,k,a[5];
	
	for(k=0;k<5;k++)
	scanf("%d",&a[k]);
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(k=0;k<5;k++)
	printf("%d",a[k]);
	
	
}
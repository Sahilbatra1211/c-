//selection sort

#include<stdio.h>
int main()
{
	int a[5],v,i,j,k;
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(j=0;j<4;j++)
	{
		for(k=j;k<5;k++)
		{
			if(a[k]>a[k+1])
			{
				int temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	
	
	
	
}
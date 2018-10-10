//insertion sort
#include<stdio.h>
int main()
{
	int i,j,a[5];
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	{
		int temp=a[i];
		for(j=i;j>0&&a[j-1]>temp;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	for(i=0;i<5;i++)
	printf("%d",a[i]);
}
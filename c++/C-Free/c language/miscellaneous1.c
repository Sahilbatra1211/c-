#include<stdio.h>
int main()
{
	int a[]={51,1,5,20,25};
	int x,y,z;
	
	y=a[1]++;
	x=++a[1];
	z=a[x++];           // yyyyyyy????
	printf("%d%d%d",x,y,z);
	
}


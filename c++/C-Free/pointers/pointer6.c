// assigning value to array
#include<stdio.h>
int main()
{
	int a[5];
	int *p,i;
	p=a;
	 for( i=0;i<5;i++)
	 {
 		scanf("%d",&*p);
 		p++;
 	}
 	p=a;   //fir se initial adress pr le jana 
 	 for( i=0;i<5;i++)
	 {
 		printf("%d",*p);
 		p++;
 	}
}
//Continue statement-if there is acontinue statement in a loop then the loop stops there and starts from the beginning  

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=2;i++)
	{
		for (j=1;j<=2;j++)
		{
			if(j==i)
			continue;
			
			printf("%d%d",i,j);
		}
	}
}
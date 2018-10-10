//factorial using recursion 
#include<stdio.h>

int fact(int x)
{
	int f;
	if(x==0)
	{
		return(1);

	}
	else{
		f=x*fact(x-1);
		return(f);
	}
}
int main()
{
	int no,ans;
	scanf("%d",&no);
	
	ans=fact(no);
	printf("the answer is %d",ans);
}
#include<stdio.h>

int t=-1;
const int size=5;

void push(int a[])
{	
	while(1)
	{
		if(t==size-1)
		{
			printf("overflow error");
			break;
		}
		printf("enter the value ");
		
	int v;
	scanf("%d",&v);
	t++;
	a[t]=v;
	
	printf("do u want to enter more");
	fflush(stdin);
	char c;
	scanf("%c",&c);
	if(c=='n')
	break;
	}
}

void pop()
{
	while(1)
	{
		if(t==-1)
		{
			printf("underflow error");
			break;
			
		}
		t--;
		printf("data popped");
		
		printf("do u want to pop more");
		int c;
		fflush(stdin);
		 scanf("%c",&c);
		 if(c=='n')
		 break;
	}
}

int main()
{
	int a[size];
	
	push(a);
	pop();
}


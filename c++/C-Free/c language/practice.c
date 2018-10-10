#include<stdio.h>
#include<conio.h>
 int t=-1;
 const int size=5;
 
 void insert(int x[])
 {
 	while(1)
	 {	int v;
	 	printf("enter the no to be stored ");
 		scanf("%d",&v);
 		
		 if(t==size-1)
	 	{
 			printf("overflow error !");
			 break;	
 		}	
 		printf("data inserted\n");
 		x[t]=v;
 		t++;
 		
 		printf("do u want to insert more?");
 		char a;
 		scanf("%c ",&a);
 		if(a=='n')
		{
			break;
		}	
		
		
 	}
 }
void pop()
{	while(1)
{
	if(t==-1)
	{
		printf("underflow error");
		
	}
	
	t--;
	char ch;
	printf("do u want to pop more?");
	scanf("%c",&ch);
  if(ch=='n' ||	ch=='N')
	{
			break;
	}
}
}
void display(int x[])
{ int i=0;
	for(i=0;i<=t;i++)
	{
		printf("%d",x[i]);
	}
} 

int main()
{	int a[size];
	while(1)
	{
		
		
		printf("insert(1):\n");
		printf("pop(2):\n");
		printf("display(3):\n");
		printf("exit(0):\n");
		
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(a);
					break;
			case 2: pop(a);
					break;
			case 3: display(a);
					break;
			case 0:exit(0);
					break;															
					
		}
	}
	
}
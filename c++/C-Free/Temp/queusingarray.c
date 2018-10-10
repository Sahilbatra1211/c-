#include<stdio.h>
int f=-1,r=-1;
const int size=5;

void insert(int x[])
{while(1)
{
	

	if(r==-1 && f==-1)
	{
		r=0;
		f=0;
	}
	if(r==size-1)
	{
		printf("overflow error");
		break;
	}
	else{
		r++;
	}
	int v;
	printf("enter the data");
	scanf("%d",&v);
	
	x[r]=v;
	
	printf("do u want to enetr more data ?");
	char a;
	scanf("%d",&a);
	if(a=='n')
	{
		break;
	}
		
	
}
}
void delet(int x[])
{
	while(1)
	{
		if(r==f)
		{
			r=-1;
			f=-1;
		}
		if(r==-1)
		{
			printf("underflow");
		}
		else{
			f++;
		}
			printf("do u want to delete more data ?");
	char a;
	gets(a);
	if(a=="n")
	{
		break;
	}
		
	}
	
	
}
void display(int x[])
{	int i;
	for(i=0;i<=r;i++)
	{
		printf("%d",x[i]);
	}
}

int main()
{int a[size];

	while(1)
	{
		printf("\ninsert(1)");
		printf("\ndelet(2)");
		printf("\ndisplay(3)");
		printf("\nexit(0)");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(a);
			break;
			case 2: delet(a);
			break;
			case 3: display(a);
			break;
			case 0: exit(0);
			break;						
		}
	}
	
}
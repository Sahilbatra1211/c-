#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *next;
	int data;
	
};

typedef struct node NODE;

NODE *top=NULL;

void push()
{	while(1)
{
	int a;
	printf("enter the data to be inserted ");
	scanf("%d",&a);
			

	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	ptr->data=a;
	ptr->next=top;
	top=ptr;
	
	printf("do u want to insert more?y/n");
	char c;
	fflush(stdin);
	scanf("%c",&c);
	if(c=='n')
	break;
}
}

void pop()
{
NODE *temp=top;
while(1)
{
	
if(temp==NULL)
{
	printf("underflow");
	break;
}

temp=temp->next;

printf("do u want to pop more");
char c;
fflush(stdin);
scanf("%d",&c);

if(c=='n')
break;
}
}

int main()
{
push();
pop();	
}
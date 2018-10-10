#include<iostream.h>
 struct node{
 	int data;
 	struct node *next;
 };
 typedef struct node stud;
 
 stud *temp=NULL;
 stud *top;
 void push(int a)
 {
	
	top->data=a;
	top->next= temp;
	temp=top;	
 }
void pop()
{
	
	top=top->next;
	
}
void display()
{	stud *t;
	while(t!=NULL)
	{
	
	t=top;
	printf("%d",top->data);
	t=t->next;
	
	}
}

int  main()
{
	push(1);
	push(2);
	push(3);
	pop();
	display();
	
}
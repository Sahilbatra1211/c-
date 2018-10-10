#include<stdio.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node stud;
 stud *top=NULL;
 
 void insert(int a)
{
	stud *temp=(stud*)malloc(sizeof(stud));
	temp->data=a;
	temp->next=top;
	top=temp;
}

void pop()
{
	top=top->next;
}

void display()
{
	stud *p;
	p=top;
	while(p!=NULL)
	{	printf("%d",p->data);
		p=p->next;
	}
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	pop();
	display();



}
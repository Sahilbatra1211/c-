#include<iostream.h>
struct node{
	int info;
	node *next;

};
int main()
{
	node *ptr,*start;
	
	start=new node;
	start->info=10;
	start->next=NULL;
	
	ptr=new node;
	ptr->info=20;
	ptr->next=start;
	start=ptr;
	
	ptr=new node;
	ptr->info;
	ptr->next=start;
	start=ptr;
	
	ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->next;
	}
	
	
}
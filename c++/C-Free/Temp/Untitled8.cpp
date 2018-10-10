#include<iostream.h>

struct node{
	int info;
	node *next;
	
};
int main()
{
	node *ptr,*start,*end;
	
	start=new node;
	start->info=10;
	start->next=NULL;
	end=start;
	
	ptr=new node;
	ptr->info;
	ptr->next=NULL;
	end->next=ptr;
	end=ptr;
	
	ptr=new node;
	start->info;
	start->next=NULL;
	end->next=ptr;
	end=ptr;
	ptr=end;
	
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->next;
	}
}
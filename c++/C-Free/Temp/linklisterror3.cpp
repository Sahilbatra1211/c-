#include<iostream.h>

struct node{
	int info;
	node *next;
	
};

int main()
{
	node *start=NULL,*end,*ptr;
	
	while(1)
	{
		int v;
		cout<<"enter the val";
		cin>>v;
		
		if(start=NULL)
		{
			start=new node;
			start->info=v;
			start->next=NULL;
			end=start;
			
		}
		else{
			ptr=new node;
			ptr->info=v;
			ptr->next=NULL;
			end->next=ptr;
			end=ptr;
			
		}
		cout<<"do u want to enter more?";
		char c;
		cin>>c;
		if(c=='n')
		{
			break;
		}
	}
	
	node *ptr2;
	while(ptr2!=NULL)
	{
		cout<<ptr2->next;
		ptr2=ptr2->next;
	}
	
}
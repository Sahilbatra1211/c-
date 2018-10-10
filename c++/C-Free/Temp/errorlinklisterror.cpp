#include<iostream.h>

struct node{
	int info;
	node *next;
	};

int main()
{
	node *start=NULL,*ptr;
	
	int val;
	char ch;
	while(1)
	{cout<<"enter the value";
	cin>>val;
	if(start==NULL)
	{
		start=new node;
		start->next=NULL;
		start->info=val;
	}
	else{
		ptr=new node;
		ptr->next=start;
		start=ptr;
		}
		cout<<"do u want to enter more y/n";
		cin>>ch;
	if(ch=='n')
	{
		break;
	}
	}
	node *ptr2;
	while(ptr2!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->next;
	}
}





















































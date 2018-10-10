#include<iostream.h>

struct Node{
	int info;
	Node *next;	
};



int main()
{
	Node *ptr,*start=NULL,*end=NULL;

	cout<<"Enter 0 to Exit\n";	
	while(1)
	{
		int val;
		cout<<"Enter data for a node : ";
		cin>>val;

	if(val==0)
		break;

	if(start==NULL)
	{
		start = new Node;
		start->info=val;
		start->next=NULL;
		end=start;			//first case
	}
	else{
		ptr = new Node;
		ptr->info=val;
		ptr->next=NULL;
		
		end->next=ptr;
		end = ptr;		//other cases
	}
	}
	
	ptr = start;
	while(ptr!=NULL)
	{	cout<<ptr->info<<"\n";
	ptr = ptr->next;
	}
}
#include<iostream.h>

struct Node
{
	int info;
	Node *next;	
};

int main()
{
	Node *ptr,*start=NULL;

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
		start->next=NULL;	//first case
	}
	else{
		ptr = new Node;
		ptr->info=val;
		ptr->next=start;	//iske baad ka smgh nh aya
		start = ptr;		//other cases 
	}
	}
	
	ptr = start;
	while(ptr!=NULL)
	{	cout<<ptr->info<<"\n";
	ptr = ptr->next;
	}

}
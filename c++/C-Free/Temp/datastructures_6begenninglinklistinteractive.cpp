#include<iostream.h>

struct Node{
	int info;
	Node *next;
};


int main()
{
	Node *ptr=NULL,*start=NULL;
	
	while(1)
	{
		int v;
		cout<<"Enter Data : ";
		cin>>v;
		
	if(start==NULL)	
	{start = new Node;
	start->info=v;
	start->next=NULL;
	}
	else
	{ptr = new Node;
	ptr->info=v;
	ptr->next=start;
	start=ptr;
	}
		char ch;
		cout<<"Do you want to enter more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}

//display
Node *ptr2;
	ptr2=start;
	while(ptr2!=NULL)	
	{
		cout<<ptr2->info<<"\n";
		ptr2=ptr2->next;	
	}
}
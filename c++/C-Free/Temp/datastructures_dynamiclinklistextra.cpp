#include<iostream.h>

struct Node{
	int info;
	Node *next;
};


int main()
{
	Node *ptr,*start;
	
	start = new Node;
	start->info=10;
	start->next=NULL;
	
	ptr = new Node;
	ptr->info=20;
	ptr->next=start;   // strt kas adress apne aap chala jaerga      
	start=ptr;
	
	ptr= new Node;   //firse declare kyu kiya
	ptr->info=30;
	ptr->next=start;
	start = ptr;
	
	ptr=start;     // isko hum ptr ki bajaye koi aujjr naya ptr bna kr bhi kr skte h na?
	while(ptr!=NULL)	
	{
		cout<<ptr->info<<"\n";
		ptr=ptr->next;	
	}
}
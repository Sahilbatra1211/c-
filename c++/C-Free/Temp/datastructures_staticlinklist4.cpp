#include<iostream.h>

struct Node{
	int info;
	Node *next;     //???
};


int main()
{
	Node obj1,obj2,obj3;
	
	obj1.info=10;
	obj2.info=20;
	obj3.info=30;
	
	obj1.next=&obj2;
	obj2.next=&obj3;
	obj3.next=NULL;
	
	//traverse
	Node *ptr;
	ptr=&obj1;
	
	while(ptr!=NULL)	//hame yaha ye ni daalna chaiye h ki ptr->next=NULL??
	{
		cout<<ptr->info<<"\n";
		ptr=ptr->next;	
	}
}
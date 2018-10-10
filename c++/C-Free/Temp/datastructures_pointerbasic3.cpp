#include<iostream.h>

struct Node{
	int info;
};


int main()
{
	Node obj1,obj2,obj3;
	
	obj1.info=10;
	obj2.info=20;
	obj3.info=30;

	cout<<"1st method\n";
	cout<<obj1.info<<"\n";
	cout<<obj2.info<<"\n";
	cout<<obj3.info<<"\n";
	
	Node *ptr;
	
	cout<<"Second method\n";
	ptr=&obj1;	
	cout<<(*ptr).info<<"\n";
		
	ptr=&obj2;	
	cout<<ptr->info<<"\n";
	
	ptr=&obj3;	
	cout<<ptr->info<<"\n";
	
	
}
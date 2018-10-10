#include<iostream.h>

struct node{
	int info;
	node *nextt;
	
};
int main()
{
	node obj1,obj2,obj3;
	
	obj1.info=10;
	obj2.info=20;
	obj3.info=30;
	
	obj1.next=&obj2;
	obj2.next=&obj3;
	obj3.next=NULL:
	
	node *ptr=&obj1;
	
	while(1)
	{
		cout<<ptr->info;
		ptr=ptr->next;
	}
}
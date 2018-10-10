#include<iostream.h>

struct Node{
	int info;
	Node *next;	
};

int main()
{
	Node *ptr,*start,*end;

	start = new Node;
	start->info=10;
	start->next=NULL;
	end=start;	//first case
	
	ptr = new Node;
	ptr->info=20;
	ptr->next=NULL;
	end->next=ptr;     //end k next me ptr daalne se kya start k next me bhi ptr dal ajega
	end = ptr;		//other cases

ptr = new Node;
	ptr->info=30;
	ptr->next=NULL;
	end->next=ptr;
	end = ptr;		// ab hamne aage to link kiya ni or ptr->next me null ta or ab end k next me bhi null hi reh jaega kyuki aage link ni kiya


// display start to starting me hi reh gaya kyuki is baar humne end ko shift kiya to hum start ki madad se seedha print kra sakte h
	Node *ptr2;
	ptr2 = start;//iska matlab samaj ni aya yaha pr
	while(ptr2!=NULL)
	{	cout<<ptr2->info<<"\n";
	ptr2 = ptr2->next;          //
	}

}
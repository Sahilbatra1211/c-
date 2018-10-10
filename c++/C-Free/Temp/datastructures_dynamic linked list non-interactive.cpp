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
	start->next=NULL;	//first case
	
	ptr = new Node;
	ptr->info=20;
	ptr->next=start;
	start = ptr;		//other cases

	ptr = new Node;
	ptr->info=30;
	ptr->next=start;
	start = ptr;		//other cases
	
	
	
	
	//Display at this pos both ptr and start are at the end pos now its necessary to store start in another ptr and display through it if we directly do by start the main adress may be lost
	Node *ptr2;				 //yaha se program ko seprate maan le or ye isliye kr rae h ki hr baar display krane se pehle ptr jo h starting pos pr aa jae
	ptr2 = start;   
	while(ptr2!=NULL)
	{	cout<<ptr2->info<<"\n";
	ptr2 = ptr2->next;
	}

}
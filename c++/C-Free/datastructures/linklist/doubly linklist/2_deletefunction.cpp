// delete function

void deletenode(node *head,node *del)
{
	if(head==del)
	{
		head=del->next;
	}
	if(del->next!=NULL)
	{
		del->next->prev=del->prev;
	}
	if(del->prev!=NULL)
	{
		del->prev->next=del->next;
	}	
	
	delete(del);
	
}
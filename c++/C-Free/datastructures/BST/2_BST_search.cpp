//implementation of binary search tree
//time taken is O(logn) where n is hieght of tree
#include<iostream.h>
#include<stdio.h>

struct node 
{
	node *left;
	int data;
	node *right;
};





node *insert(node *root,int x)
{
	if(root==NULL)
	{
	node *ptr=new node;
	ptr->data=x;
	ptr->left=NULL;
	ptr->right=NULL;
	return(ptr);
	}
	else if(root->data>x)
	{
		root->left=insert(root->left,x);
	}
	else
	{
		root->right=insert(root->right,x);
	}
	return(root);
 }
 int flag=0;
 void search(node *root,int x)
 {
 	if(root==NULL)
 	{return ;}
 	else if(root->data==x)
 	{flag=1;
	 return ;}
 	else if(root->data>x)
 	search(root->left,x);
 	else
 	search(root->right,x);
 }
 
 int main()
 {	node *root=NULL;
 	root=insert(root,1);
 	root=insert(root,2);
 	root=insert(root,5);
 	root=insert(root,4);
 	root=insert(root,3);
 	search(root,5);
 	if(flag==1)
 	cout<<"found";
 	else cout<<"not found";
 }
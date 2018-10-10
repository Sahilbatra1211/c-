//implementation of binary search tree
#include<iostream.h>
#include<stdio.h>
#include<queue> 

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
 
 int main()
 {	node *root=NULL;
 	root=insert(root,1);
 	root=insert(root,2);
 	root=insert(root,5);
 	root=insert(root,4);
 	root=insert(root,3);
 }
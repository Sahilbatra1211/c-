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
 
 bool leftcheck(int x,node *current)
 {
 	if(current==NULL)
 	return true;
 	
 	if(current->data<x && leftcheck(x,current->left) && leftcheck(x,current->right) )
 	return true;
 	else 
	 return false;
  }
 bool rightcheck(int x,node *current)
 {
 	if(current==NULL)
 	return true;
 	
 	if(current->data>x && rightcheck(x,current->left) && rightcheck(x,current->right))
 	return true;
 	else 
 	return false;
 }
 
 bool ISBST(node *root)
 {
 	if(root==NULL)
 	return true;
 	
 	if(leftcheck(root->data,root->left) && rightcheck(root->data,root->right) )
		return true;
	else 
	return false;
 }
 
 int main()
 {	node *root=NULL;
 	root=insert(root,15);
 	root=insert(root,12);
 	root=insert(root,13);
 	root=insert(root,17);
 	root=insert(root,18);
 	if(ISBST(root)==true)
 	cout<<"is a binary tree ";
 	else 
 	cout<<"not a binary tree ";
 }
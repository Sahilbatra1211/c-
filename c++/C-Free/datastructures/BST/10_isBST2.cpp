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
 
  bool isBST(node *root,int minimum,int maximum)
 {
 	if(root==NULL)
 	return true;
 	
 	if(root->data>minimum && root->data<maximum && isBST(root->left,minimum,root->data)&& isBST(root->right,root->data,maximum))
		return true;
	else 
	return false;
 }
 
 bool isBST2(node *root)
 {
 	return isBST(root,INT_MIN,INT_MAX);
 }
 

 
 int main()
 {	node *root=NULL;
 	root=insert(root,1);
 	root=insert(root,2);
 	root=insert(root,5);
 	root=insert(root,4);
 	root=insert(root,3);
 	if(isBST2(root))
 	cout<<"is binary tree";
 	else 
 	cout<<"not a binary tree";
 }
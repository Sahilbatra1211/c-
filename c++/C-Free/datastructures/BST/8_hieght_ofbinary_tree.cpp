//hieght of binary tree-it is no of (nodes-1)
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
 int h;
 int hieght(node *root)
 {
 	if(root==NULL)
 	return -1;
 	
 	int left=hieght(root->left);
 	int right=hieght(root->right);
 	
 	if(left>right)
 	{
		h=left+1;
	 }
	 else
	 h=right+1;
	 return(h);
 }
 
 int main()
 {	node *root=NULL;
 	root=insert(root,1);
 	root=insert(root,2);
 	root=insert(root,5);
 	root=insert(root,4);
 	root=insert(root,3);
 	int a=hieght(root);
 	cout<<a;
 }
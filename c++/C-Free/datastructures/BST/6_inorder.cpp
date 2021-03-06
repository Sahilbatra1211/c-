//implementation of binary search tree- LDR
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
 
 void inorder(node *root)
 {
 	if(root==NULL)
 	return;
 	
 	
 	inorder(root->left);
 	cout<<root->data<<" ";
	 inorder(root->right);
		
}
 
 int main()
 {	node *root=NULL;
 	root=insert(root,15);
 	root=insert(root,12);
 	root=insert(root,10);
 	root=insert(root,13);
 	root=insert(root,17);
	root=insert(root,16);
	root=insert(root,18);
	inorder(root); 
	
}
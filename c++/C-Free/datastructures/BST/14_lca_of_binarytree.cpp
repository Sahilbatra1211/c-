//lca of binary tree not binary search tree
#include<iostream>
using namespace std;

struct node
{
	node *left;
	node *right;
	int data;
};

node *BST(node *root,int x)
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
		root->left=BST(root->left,x);
	}
	else
	{
		root->right=BST(root->right,x);
	}
	return(root);
 }
node *lca(node *root,int n1,int n2)
{
	if(root==NULL)
	return NULL;
	
	if(root->data==n1 || root->data==n2)
	return root;
	
	node *left=lca(root->left,n1,n2);
	node *right=lca(root->right,n1,n2);
	
	if(left!=NULL && right!=NULL)
	{
		return root;
	}
	else
	{
		return(left?left:right);
	}
}
 
 int main()
 {
	node *root=NULL;
 	root=BST(root,15);
 	root=BST(root,12);
 	root=BST(root,13);
 	root=BST(root,11);
 	root=BST(root,18);
 	root=BST(root,17);
 	root=BST(root,19);
 	node *ptr=lca(root,11,13);
 	cout<<ptr->data;
 }
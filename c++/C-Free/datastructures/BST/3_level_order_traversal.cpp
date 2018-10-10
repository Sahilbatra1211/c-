//implementation of binary search tree
#include<iostream.h>
#include<stdio.h>
#include<queue> 
using namespace std;

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
 
void levelordertraversal(node *root)
{
	if(root==NULL)
	return;
	
	
	queue<node*> Q;
	
	Q.push(root);

	
	while(!Q.empty())
	{
		node *current=Q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL)
		{
			Q.push(current->left);
		}
		if(current->right!=NULL)
		{
			Q.push(current->right);
		}
		Q.pop();
	}
} 
 int main()
 {	node *root=NULL;
 	root=insert(root,5);
 	root=insert(root,4);
 	root=insert(root,3);
 	root=insert(root,2);
 	root=insert(root,7);
 	root=insert(root,6);
 	levelordertraversal(root);
 }
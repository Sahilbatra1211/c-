// lowest common ancestor of a binary search tree .
// it is the first value between  two given values n1 and n2. n1<n<n2
#include<iostream>
using namespace std;

struct node 
{
	node *left;
	int data;
	node *right;
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
 
 node* lowestcomm(node *root,int n1,int n2)
 {
 	if (root == NULL) return NULL;
 
    // If both n1 and n2 are smaller than root, then LCA lies in left
    if (root->data > n1 && root->data > n2)
        return lowestcomm(root->left, n1, n2);
 
    // If both n1 and n2 are greater than root, then LCA lies in right
    if (root->data < n1 && root->data < n2)
        return lowestcomm(root->right, n1, n2);
 
    return root;
 }
 
 int main()
 {	node *root=NULL;
 	root=BST(root,15);
	root=BST(root,12);
	root=BST(root,14);
	root=BST(root,11);
	root=BST(root,18);
	root=BST(root,16);
	root=BST(root,19);
 	node *t=lowestcomm(root,16,19);
 	cout<<"lowest common ancestor is"<<t->data;
 }

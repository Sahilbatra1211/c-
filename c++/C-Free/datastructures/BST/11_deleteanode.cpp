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
		ptr->left=NULL;
		ptr->right=NULL;
		ptr->data=x;
		return ptr;
	}
	else if(root->data>x)
	{	
		root->left=BST(root->left,x);	
	}
	else{
		root->right=BST(root->right,x);
	}
	return root;
}

void inorder(node *root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int flag=0;
int search(node *root,int x)
{
	if(root==NULL)
	return 0;
	if(root->data==x)
	return 1;
	
	if(root->data>x)
	return search(root->left,x);
	else
	return search(root->right,x);
}
int flag2=0;
node *temp;
int deletenode(node *root,int x)
{
	if(root==NULL)
	{
		cout<<"node not found";
		return 0;		
	}
	if(root->data==x)
	{	temp=root;
		cout<<"node to be deleted found";
		return 1;
	}
	if(root->data>x)
	{
		node *prev=root;
		flag2=deletenode(root->left,x);
		if(flag2==1)
		{
			prev->left=temp->left;
			free(temp);
		}
		
	}
	else
	{
		node *prev=root;
		flag2=deletenode(root->right,x);
		if(flag2==1)
		{
			prev->right=temp->right;
			free(temp);
		}
	}
	
}

int main()
{
	node *root=NULL;
	
	root=BST(root,15);
	root=BST(root,12);
	root=BST(root,14);
	root=BST(root,11);
	root=BST(root,18);
	root=BST(root,16);
	root=BST(root,19);
	
	inorder(root);
	flag=search(root,11);
	
	if(flag==1)
	cout<<"number found";
	else
	cout<<"no not found";
	
	deletenode(root,16);
	inorder(root);
}

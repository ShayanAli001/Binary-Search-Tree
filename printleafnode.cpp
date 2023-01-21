#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left, *right;
	node(int x)
	{
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}
	
};


node *BST(node *root , int key)
{
	if(root == NULL)
	{
		return new node(key);
	}
	if(key < root->data)
	{
		root->left = BST(root->left,key);
	}
	else
	{
		root->right = BST(root->right,key);
	}
	return root;
}


void prntleafnod(node *root)
{
	if(!root->left  && !root->right)
	{
		cout << root->data << endl;
	}
	if(root->left)
	{
		prntleafnod(root->left);
	}
	if(root->right)
	{
		prntleafnod(root->right);
	}
}



int print( node *root)
{
	if(root == NULL)
	{
		return -1;
	}
	print(root->left);
	cout << root->data << endl;
	print(root->right);
}


int main()
{
		node* root = NULL;
		root = BST(root, 8);
		BST(root, 3);
		BST(root, 10);
		BST(root, 1);
		BST(root, 6);
		BST(root, 14);
		BST(root, 4);
		BST(root, 7);
		BST(root, 13);
		
		cout << "Inorder traversal of this BST is:"<<endl;
		print(root);
		cout << endl;
		
		cout << "Leaf Node of this BST is:"<< endl;
		prntleafnod(root);
				
}
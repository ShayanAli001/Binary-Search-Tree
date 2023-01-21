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



node * secondlastele(node *root)
{
	node *second = NULL;
	if(root == NULL)
	{
		cout << "BSt is empty:";
	}
	if(root->right == NULL)
	{
		cout << "BSt has only one elemnt:";
	}
	while(root->right != NULL)
	{
	
	 second = root;	 
	 root = root->right;
	 
	}
	cout << "Second Last elemnt of this BST is:" <<endl;
	cout << second->data;
}



node *BST(node*root ,int key)
{
	if(root == NULL)
	{
		return new node(key);
	}
	
	if(key < root->data)
	{
		root->left = BST(root->left,key);
	}
	
	if(key > root->data)
	{
		root->right = BST(root->right,key);
	}
	return root;
}


void print(node *root)
{
	if(root == NULL)
	{
		return;
	}
	print(root->left);
	cout << root->data << endl;
	print(root->right);
}
int main()
{
	node *root = NULL;
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
	
	
	secondlastele(root);
}
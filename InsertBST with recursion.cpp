#include<iostream>
using namespace std;


class node{
	public:
	int data;
	node *left,*right;
	node(int d)
	{
		this->data = d;
		left = NULL;
		right = NULL;
	}
};



node *insertBST(node *root , int key)
{
	if(root == NULL)
	{
		node *root = new node(key);
		return root;
	}

	else if(key == root->data)
	{
		return root;
	}
	else if(key > root->data)
	{
		root->right = insertBST(root->right,key);
	}
	else if(key < root->data)
	{
		root->left = insertBST(root->right,key);
	}
	return root;
}


void inorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}

int main()
{
	node *root = NULL;
	root = insertBST(root,5);
	insertBST(root,1);
	insertBST(root,3);
	insertBST(root,4);
	insertBST(root,2);
	insertBST(root,7);	
	
	inorder(root);
}


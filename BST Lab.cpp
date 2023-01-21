#include<iostream>
using namespace std;


class node
{
	public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		this->data = d;
		left = NULL;
		right = NULL;		
	}
};
node* BST(node *root, int key)
{
	if(root == NULL)
	{
		root = new node(key);
		return root;
	}
	while( root != NULL)
	{
	if(root->data == key)
	{
		return root;
	}
	
	else if(key > root->data)
	{
		root = root->right;
	}
	
	else if(key < root->data)
	{
		root = root->left;
	}
	}
	node *pre = root;
	if (pre->data > key) {
			pre->left = new node(key);
		}
		else if (pre->data < key) {
			pre->right = new node(key);
		}
		return root;
	}

void preorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	cout << "->" << root->data << "";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	
	inorder(root->left);
	cout << "->" << root->data << "";
	inorder(root->right);
	
}

void postorder(node *root)
{
	if(root == NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << "->" << root->data << "";
}



int main()
{
	/*
	node *root = new node(5);
	root->left = new node(2);
	root->left->left = new node(1);
	root->right = new node(10);
	root->right->left = new node(9);
	root->right->left->left = new node(8);
	root->right->right = new node(11);
	root->right->right->right = new node(15);
	
	postorder(root);
	*/
	node *root =NULL;
    int data;
	cout << "Enter Data";
	cin >> data;
	while (data!=-1) {
		
		cout << "Enter Data";
		cin >> data;
		root=BST(root,data);
	}
	
}


















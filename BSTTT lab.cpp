#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
		node(int d)
		{
		this->data=d;
		left = NULL;
		right = NULL;
	}
};

node  *BST(node *root)
{
	
	int data;
	cout << "Enter data :" <<endl ;
	cin >> data;
	root = new node(data);
	
	if( data == -1)
	{
		return NULL;
	}
	cout << "Enter data for insert in left of :"<< data << endl;
	root->left = BST(root->left);
	cout << "Enter data for insert in right of : " << data <<endl;
	root->right = BST(root->right);	
	return root;
}
void inorder(node *root)
{
	if(root == NULL){
		return;
	}
	
	
	inorder(root->left);
	cout << "->" << root->data;
	inorder(root->right);
	
}
int main()
{
	node *root = NULL;
	root = BST(root);
	inorder(root);
	
}

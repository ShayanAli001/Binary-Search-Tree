#include<iostream>
using namespace std;


struct node{
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
node * BST(node *root, int val)
{
	
	while(root != NULL)
	{
		
		if(root->data == val)
		{
			return new node(val);
		}
		
		else if(val > root->data)
		{
			root = root->right;
		}
		else
			root = root->left;
	}
 
	cout<<"\n Data not found";
	return;
}
void inorder(node *root)
{
	if(root == NULL){
		return;
	}
	
	
	inorder(root->left);
	inorder(root->right);
	cout <<root->data;
}
int main()
{
	node *root = NULL;
	root = BST(root,5);
	BST(root,1);
	BST(root,4);
	BST(root,3);
	BST(root,2);
	BST(root,7);
	
	inorder(root);
	cout<<endl;
	return 0;
	/*
->1->2->5->8->9->10->11->15
*/
	
}

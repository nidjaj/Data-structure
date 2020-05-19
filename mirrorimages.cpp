//Mirror Image
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node
{
	public:
	int key;
	Node *left;
	Node *right;
	
	Node(int key)
	{
		this->key=key;
		this->left=nullptr;
		this->right=nullptr;	
	}	
};
void MirrorImage(Node *root)
{
	if(root==nullptr)
	return;
	
	swap(root->left,root->right);
	
	MirrorImage(root->left);
	MirrorImage(root->right);
}
void PreOrder(Node *root)
{
	if(root==nullptr)
	return;
	
	printf("%d\t",root->key);
	PreOrder(root->left);
	PreOrder(root->right);
}
int main()
{
	Node *root1=nullptr;
	root1=new Node(1);
	root1->left=new Node(2);
	root1->right=new Node(3);
	root1->left->left=new Node(4);
	root1->left->right=new Node(5);
	root1->right->left=new Node(6);
	root1->right->right=new Node(7);
	root1->right->right->left=new Node(8);
	PreOrder(root1);
	printf("\n");
	MirrorImage(root1);
	PreOrder(root1);
	
}

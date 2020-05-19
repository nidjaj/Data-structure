#include<iostream>
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
bool IsIdentical(Node *root1,Node *root2)
{
	if(root1==nullptr && root2==nullptr)
	return true;
	return (root1 && root2) && (root1->key== root2->key) && 
	IsIdentical(root1->left,root2->left) && IsIdentical(root1->right,root2->right);
}
int main()
{
	Node *root1=nullptr;
	root1=new Node(15);
	root1->left=new Node(10);
	root1->right=new Node(20);
	root1->left->left=new Node(8);
	root1->left->right=new Node(12);
	root1->right->left=new Node(16);
	root1->right->right=new Node(25);
	
	
	Node *root2=nullptr;
	root2=new Node(15);
	root2->left=new Node(10);
	root2->right=new Node(40);
	root2->left->left=new Node(8);
	root2->left->right=new Node(12);
	root2->right->left=new Node(16);
	root2->right->right=new Node(25);
	
	if(IsIdentical(root1,root2))
	cout<<"Yes";
	else
	cout<<"No";
	
}

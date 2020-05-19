#include<iostream>
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
bool LeftToRight(Node *root,int level)
{
	if(root==nullptr)
	return false;
	
	if(level==1)
	{
		cout<<root->key<<" ";
		return true;		
	}
	int left=LeftToRight(root->left,level-1);
	int right=LeftToRight(root->right,level-1);
}
bool RightToLeft(Node *root,int level)
{
	if(root==nullptr)
	return false;
	
	if(level==1)
	{
		cout<<root->key<<" ";
		return true;
	}
	
	int right=RightToLeft(root->right,level-1);
	int left=RightToLeft(root->left,level-1);
	
	return right||left;
	
}
void SpiralOrder(Node *root)
{
	if(root==nullptr)
	return;
	
	int level=1;
	
	while(LeftToRight (root,level++) && RightToLeft(root,level++));
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
	SpiralOrder(root1);
}

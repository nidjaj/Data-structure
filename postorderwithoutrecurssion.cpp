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
void PostOrder(Node *root)
{
	if(root==nullptr)
	return;
	
	stack<Node *> stk;
	stk.push(root); 
	
	stack<int> out;
	
	while(!stk.empty())
	{
		Node *curr=stk.top();
		stk.pop();
		
		out.push(curr->key);
		
		if(curr->left)
		stk.push(curr->left);
		
		if(curr->right)
		stk.push(curr->right);
	}
	
	while(!out.empty())
	{
		cout<<out.top()<<" ";
		out.pop();
	}
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
	PostOrder(root1);
}

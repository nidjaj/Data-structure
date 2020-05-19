#include<iostream>
#include<queue>
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
void ReverseLevelOrder(Node *root)
{
	if(root==nullptr)
	return;
	
	queue<Node *>q;
	stack<int> s;
	
	q.push(root);
	while(!q.empty())
	{
		Node *curr=q.front();
		q.pop();
		
		s.push(curr->key);
		
		if(curr->right)
		q.push(curr->right);
		
		if(curr->left)
		q.push(curr->left);
	}
	
	while(!s.empty())
	{
		cout<<s.top()<<"  ";
		s.pop();
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
	ReverseLevelOrder(root1);
}

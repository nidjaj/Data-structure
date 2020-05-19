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
bool IsIdentical(Node *root1,Node *root2)
{
	if(root1==nullptr && root2==nullptr)
	return true;
	if(root1==nullptr)
	return false;	
	if(root2==nullptr)
	return false;
	stack<pair<Node *,Node *>> stack;
	stack.push({root1,root2});
	while(!stack.empty())
	{
		Node *x=stack.top().first;
		Node *y=stack.top().second;
		stack.pop();
		if(x->key!=y->key)
		return false;
		if(x->left && y->left)
		stack.push({x->left,y->left});
		else if(x->left || y->left)
		return false;
		
		if(x->right && y->right)
		stack.push({x->right,y->right});
		else if(x->right || y->right)
		return false;
		
	}
	return true;
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
	root2->right=new Node(20);
	root2->left->left=new Node(8);
	root2->left->right=new Node(12);
	root2->right->left=new Node(16);
	root2->right->right=new Node(25);
	
	if(IsIdentical(root1,root2))
	cout<<"Yes";
	else
	cout<<"No";
	
}

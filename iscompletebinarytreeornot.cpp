//Complete Binary Tree
#include<iostream>
#include<queue>
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
bool IsComplete(Node *root)
{
	if(root==nullptr)
	return false;
	
	queue<Node *>q;
	q.push(root);
	
	bool flag=false;
	
	while(!q.empty())
	{
		Node *current=q.front();
		q.pop();
		
		if(flag==true && (root->left || root->right))
		return false;
		
		if(current->left==nullptr && current->right!=nullptr)
		return false;
		
		if(current->left)
		q.push(current->left);
		else
		flag=true;
		
		if(current->right)
		q.push(cuurent->right);
		else
		flag=true;
	}
	return true;
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
	if(IsComplete(root1));
	cout<<"Yes";
	else
	cout<<"No";
	
	
	
}

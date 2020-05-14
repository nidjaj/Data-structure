#include<iostream>
#include<list>
using namespace std;
class Node
{
	public:
    int key;
	Node * left, * right;
	Node(int key)
	 {
	 	this->key=key;
	 	this->left=nullptr;
	 	this->right=nullptr;
			 }		


};
void leftview(Node *root)
{
	if(root==nullptr)
	return;
	list<Node *>queue;
	queue.push_back(root);
	Node *curr=nullptr;
	while(!queue.empty())
	{
		int size=queue.size();
		int i=0;
		while(i++<size)
		{
			curr=queue.front();
			queue.pop();
			if(i==1)
			cout<<curr->key<<" ";
			
			if(curr->left)
			queue.push_back(curr->left);
			if(curr->right)
			queue.push_back(curr->right);
		}
	}
}
int main()
{
	Node *root=nullptr;
    root =new Node(1);
	root->left =new Node(2);
	root->right=new Node(3);
	root->left->right =new Node(4);
	root->right->left =new Node(5);
	root->right->right =new Node(6);
	root->right->left->left =new Node(7);
	root->right->left->right=new Node(8);
	leftview(root);
	
}

#include<iostream>
#include<list>
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
void SpiralOrder(Node *root)
{
	if(root==nullptr)
	return;
	
	list<Node *> q;
	q.push_front(root);
	
	bool flag=false;
	
	while(!q.empty())
	{
		int nodecount=q.size();
		if(flag)
		{
			while(nodecount)
			{
				Node *curr=q.front();
				q.pop_front();
				
				cout<<curr->key<<" ";
				
				if(curr->left)
				q.push_back(curr->left);
				
				if(curr->right)
				q.push_back(curr->right);
				--nodecount;
			}
		}
		else
		{
			while(nodecount)
			{
				Node *curr=q.back();
				q.pop_back();
				
				cout<<curr->key<<" ";
				
				if(curr->right)
				q.push_front(curr->right);
				
				if(curr->left)
				q.push_front(curr->left);
				
				--nodecount;
			}
		}
		flag=!flag;
		cout<<endl;
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
	SpiralOrder(root1);
}

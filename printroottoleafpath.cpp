//print root to leaf path
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
void PrintRootToLeaf(Node *root,vector<int> &path)
{
	
	if(root==nullptr)
	return;
	
	path.push_back(root->key);
	if(root->left==nullptr && root->right==nullptr)
	{
		for(int i:path)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

	PrintRootToLeaf(root->left,path);
	PrintRootToLeaf(root->right,path);
	path.pop_back();
	
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
	root1->left->left=new Node(8);
	root1->left->right=new Node(4);
	root1->right->left=new Node(5);
	root1->right->right=new Node(25);
	root1->right->right->left=new Node(125);
	vector<int> path;
	PrintRootToLeaf(root1,path);
}

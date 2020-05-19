#include<iostream>
#include<queue>
#include<unordered_map>
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
void LeftViewPrint(Node *root,int level,auto &map)
{
	if(root==nullptr)
	return;
	
	if(map.find(level)==map.end())
	{
		map[level]=root->key;
	}
	
	LeftViewPrint(root->left,level+1,map);
	LeftViewPrint(root->right,level+1,map);
}
void LeftView(Node *root)
{
	if(root==NULL)
	return;
	
	unordered_map<int,int>map;
	
	LeftViewPrint(root,1,map);
	
	for(int i=1;i<=map.size();i++)
	cout<<map[i]<<" ";
}
void LeftView(Node *root,int level)
{
	if(root==nullptr)
	return;
	
	if(maxlevel<level)
	{
		cout<<root->key<<" ";
		maxlevel=level;
	}
	
	LeftView(root->left,level+1);
	LeftView(root->right,level+1);

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
	LeftView(root1);
}

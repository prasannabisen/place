#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node *left;
	Node *right;

	Node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

Node *build(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node *root=new Node(d);
	root->left=build();
	root->right=build();
	return root;
}

void print(Node *root){
	if(root==NULL){
		return ;
	}
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
	return ;
}

int main(){
	Node *temp=NULL;
	temp=build();
	print(temp);
}
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left=NULL;
	Node *right=NULL;
};
Node *create(int data){
	Node *temp=new Node();
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

Node *insert(Node *node,int data){
	if(node==NULL){
		node=create(data);
		return node;
	}
	if(data>node->data){
		node->right=insert(node->right,data);
	}
	else{
		node->left=insert(node->left,data);
	}
	return node;
}
void print(Node *node){
	if(node==NULL){
		return ;
	}
	print(node->left);
	cout<<node->data<<" ";
	print(node->right);
	return ;
}

int main(){
	Node *node;
	node=insert(node,5);
	node=insert(node,4);
	node=insert(node,6);
	node=insert(node,3);
	node=insert(node,2);
	node=insert(node,7);
	print(node);
}
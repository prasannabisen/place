#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *right;
	Node *left;
};

Node *create(int data){
	Node *node=new Node();
	node->data=data;
	node->right=NULL;
	node->left=NULL;
	return node;
}

Node *insert(Node *temp,int data){
	if(temp==NULL){
		temp=create(data);
		return temp;
	}
	if(data>temp->data){
		temp->right=insert(temp->right,data);
	}
	else{
		temp->left=insert(temp->left,data);
	}
	return temp;
}

void print(Node *temp){
	if(temp==NULL){
		return ;
	}
	print(temp->left);
	cout<<temp->data<<" ";
	print(temp->right);
	return ;
}

int count(Node *temp){
	if(temp==NULL){
		return 0;
	}
	return 1+count(temp->right)+count(temp->left);
}

int sum(Node *node){
	if(node==NULL){
		return 0;
	}
	return node->data+sum(node->right)+sum(node->left);
}

int main(){
	Node *temp;
	temp=insert(temp,5);
	temp=insert(temp,4);
	temp=insert(temp,6);
	temp=insert(temp,3);
	temp=insert(temp,7);
	print(temp);
	cout<<"\n";
	cout<<count(temp)<<"\n";
	cout<<sum(temp);
}
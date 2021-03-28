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

int height(Node *temp){
	if(temp==NULL){
		return 0;
	}
	int h1=height(node->left);
	int h2=height(node->right);
	return max(h1,h2)+1;
}

int diameter(Node *temp){
	if(node==NULL){
		return 0;
	}
	int h1=height(temp->right);
	int h2=height(temp->left);
	int op1=h1+h2;
	int op2=diameter(temp->right);
	int op3=diameter(temp->left);
	return max(op1,max(op2,op3));
}

int main(){
	Node *temp;
	temp=insert(temp,5);
	temp=insert(temp,4);
	temp=insert(temp,6);
	temp=insert(temp,3);
	temp=insert(temp,7);
	print(temp);
	cout<<diameter(temp);
}
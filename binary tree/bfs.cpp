#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *right;
	Node *left;
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
	print(node->right);
	cout<<node->data<<" ";
	print(node->left);
	return;
}

void bsf(Node *node){
	queue<Node*>q;
	q.push(node);
	while(!q.empty()){
		Node *f=q.front();
		cout<<f->data<<" ";
		q.pop();
		if(f->left!=NULL){
			q.push(f->left);
		}
		if(f->right!=NULL){
			q.push(f->right);
		}
	}
	return;
}

int main(){
	Node *node;
	node=insert(node,5);
	node=insert(node,1);
	node=insert(node,3);
	node=insert(node,8);
	node=insert(node,5);
	node=insert(node,7);
	print(node);
	cout<<"\n";
	bsf(node);
}
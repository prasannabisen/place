//complixity=n^2
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
	temp->left=NULL;
	temp->right=NULL;
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
int height(Node *np){
	if(np==NULL){
		return 0;
	}
	int ls=height(np->left)+1;
	int rs=height(np->right)+1;
	return max(ls,rs);
}

void bsf(Node *root,int k){
	if(root==NULL){
		return ;
	}
	if(k==1){
		cout<<root->data<<" ";
		return ;
	}
	bsf(root->right,k-1);
	bsf(root->left,k-1);
	return;
}

void printAllLevel(Node *root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		bsf(root,i);
	}
}

int main(){
	Node *node;
	node=insert(node,5);
	node=insert(node,4);
	node=insert(node,6);
	node=insert(node,3);
	node=insert(node,7);
	node=insert(node,2);
	node=insert(node,8);
	node=insert(node,1);
	node=insert(node,9);
	int k=height(node);
	cout<<k<<"\n";
	// bsf(node,2);
	printAllLevel(node);
}
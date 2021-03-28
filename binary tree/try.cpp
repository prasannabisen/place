#include<bits/stdc++.h>
using namespace std;
struct Tree{
	int data;
	Tree *right;
	Tree *left;
};

Tree *create(int data){
	Tree *temp=new Tree();
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

Tree *insert(Tree *node,int data){
	if(node==NULL){
		Tree *temp=create(data);
		return temp;
	}
	if(data>node->data){
		node->right=insert(node->right,data);
	}
	else{
		node->left=insert(node->left,data);
	}
	return node;
}

void print(Tree *node){
	if(node==NULL){
		return;
	}
	print(node->left);
	cout<<node->data<<" ";
	print(node->right);
	return;
}

int height(Tree *node){
	if(node==NULL){
		return 0;
	}
	int ls=height(node->left);
	int rs=height(node->right);
	return max(ls,rs)+1;
}

void bsf(Tree *node,int k){
	if(node==NULL){
		return;
	}
	if(k==1){
		cout<<node->data<<" ";
		return ;
	}
	bsf(node->right,k-1);
	bsf(node->left,k-1);
	return;
}
void printbsf(Tree *node){
	int h=height(node);
	for(int i=1;i<=h;i++){
		bsf(node,i);
	}
}
void bsf(Tree *node){
	queue<Tree *>q;
	q.push(node);
	while(!q.empty()){
		Tree *f=q.front();
		cout<<f->data<<" ";
		q.pop();
		if(f->right!=NULL){
			q.push(f->right);
		}
		if(f->left!=NULL){
			q.push(f->left);
		}
	}
}
int main(){
	Tree *node=NULL;
	node=insert(node,5);
	node=insert(node,1);
	node=insert(node,6);
	node=insert(node,4);
	node=insert(node,2);
	node=insert(node,11);
	node=insert(node,-1);
	node=insert(node,0);
	print(node);
	cout<<"\n";
	printbsf(node);
	cout<<"\n";
	bsf(node);	
}
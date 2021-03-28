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

Node *create(){
	int data,child;
	cin>>data>>child;
	Node *root=new Node(data);
	if(child==0){
		root->right=NULL;
		root->left=NULL;
		return root;
	}
	root->left=create();
	root->right=create();
	return root;
}

void print(Node *temp){
	if(temp==NULL){
		return ;
	}
	cout<<temp->data<<" ";
	print(temp->left);
	print(temp->right);
	return ;
}

int height(Node *node){
	if(node==NULL){
		return 0;
	}
	int ls=height(node->left);
	int rs=height(node->right);
	return max(ls,rs)+1;
}

int bsf(Node *temp,int i){
	int ans=0;
	if(temp==NULL){
		return ans;
	}
	if(i==1){
		ans=temp->data;
		return ans;
	}
	ans+=bsf(temp->left,i-1);
	ans+=bsf(temp->right,i-1);
	return ans;
}

int printlevel(Node *temp){
	int h=height(temp);
	int a;
	cin>>a;
	int ans;
	ans+=bsf(temp,a);
	return ans;
}

int main(){
	Node *temp;
	temp=create();
	cout<<printlevel(temp);
}
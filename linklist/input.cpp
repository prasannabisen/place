#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;

Node *create(int data){
	Node *temp=new Node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

Node *input(int data){
	if(head==NULL){
		Node *temp=create(data);
		head=temp;
	}
	else{
		Node *temp=create(data);
		temp->next=head;
		head=temp;
	}
	return head;
}

void print(Node *temp){
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

//input from user

// int main(){
// 	int n;
// 	Node *temp;
// 	while(n!=1){
// 		cin>>n;
// 		temp=input(n);
// 	}
// 	print(temp);
// }

//input from file
int main(){
	int d;
	Node *temp;
	while(cin>>d){
		temp=input(d);
	}
	print(head);
}
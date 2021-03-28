#include<iostream>
using namespace std;

struct Node {
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

void insert(int data){
	if(head==NULL){
		Node *temp=create(data);
		head=temp;
	}
	else{
		Node *temp=create(data);
		temp->next=head;
		head=temp;
	}
}

void print(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"\n";
}

Node *rec(Node *head){
	if(head->NULL or head==NULL){
		return head;
	}
	Node *shead=rec(head->next);
	Node *temp=shead;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	head->next=NULL;
	temp->next=head;
	return shead;
}

int main(){
	Node *temp;
	int d;
	while(cin>>d){
		insert(d);
	}
	print();
}
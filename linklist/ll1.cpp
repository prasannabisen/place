// creating link list
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* head=NULL;
Node* head1=NULL;

Node * create(int data){
	Node *temp=new Node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void insert(int data){
	Node *temp=head;
	if(head==NULL){
		temp=create(data);
		head=temp;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=create(data);
	}
}

void insert1(int data){
	Node *temp;
	if(head1==NULL){
		temp=create(data);
		head1=temp;
	}
	else{
		temp=create(data);
		temp->next=head1;
		head1=temp;
	}
}

void print(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void print1(){
	Node *temp=head1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	print();
	cout<<"\n";
	insert1(1);
	insert1(2);
	insert1(3);
	insert1(4);
	insert1(5);
	insert1(6);
	print1();
	cout<<"\n";
}
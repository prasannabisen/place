//inserting in midle
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

void insert(int data){
	Node *temp;
	if(head==NULL){
		temp=create(data);
		head=temp;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=create(data);
	}
}

void print(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void insertAt(int n,int data){
	Node *temp=head;
	while(n--){
		temp=temp->next;
	}
	Node *ins=create(data);
	ins->next=temp->next;
	temp->next=ins;
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	print();
	cout<<"\n";
	insertAt(1,9);
	insertAt(3,10);
	print();
}
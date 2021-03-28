//delete link list
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
	Node *temp=NULL;
	if(head==NULL){
		temp=create(data);
		head=temp;
	}
	else{
		temp=create(data);
		temp->next=head;
		head=temp;
	}
}

void print(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void del(int n){
	Node *temp=head;
	while(n--){
		
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
	del(2);
	del(6);
}
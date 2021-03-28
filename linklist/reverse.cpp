//swaping is expansive task
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
}
void rev(){
	Node *curr=head;
	Node *prev=NULL;
	Node *n;
	while(curr!=NULL){
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
	}
	head=prev;
}
int main(){
	int d;
	while(cin>>d){
		insert(d);
	}
	print();
	rev();
	cout<<"\n";
	print();
}
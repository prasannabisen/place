//operator overloading
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *head=NULL;

void print(Node *temp){
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

Node *create(int data){
	Node *temp=new Node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

Node *h(int data){
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

Node *inp(){
	Node *temp;
	int d;
	while(d!=1){
		cin>>d;
		temp=h(d);
	}
	return temp;
}
// void operator<<(ostream &os,Node* head){
// 	print(head);
// 	return;
// }

ostream& operator<<(ostream &os,Node *head){
	print(head);
	return os;
}

istream& operator>>(istream &is,Node *&head){
	head=inp();
	return is;
}

int main(){
	Node *head;
	cin>>head;
	cout<<head;
}
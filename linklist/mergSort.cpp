//merg sort
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *head=NULL;

Node *mergeSort(node *head){
	if(head==NULL or head->next=NULL){
		return head;
	}
//break
	node *mid=midpoint(head);
	Node *a=head;
	Node *b=mid->next;
//sort
	a=mergeSort(a);
	b=mergeSort(b);

	Node *c=mergeSort(a,b);
	return c;
}

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

int main(){
	int d;
	while(cin>>d){
		insert(d);
	}
	print();
}
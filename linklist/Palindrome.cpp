#include<bits/stdc++.h>
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
	if(head==NULL){
		Node *temp=create(data);
		head=temp;
	}
	else{
		Node *temp=head;
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
bool pali(){
	Node *temp=head;
	stack<int>a;
	while(temp!=NULL){
		a.push(temp->data);
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(temp->data!=a.top()){
			return false;
		}
		temp=temp->next;
		a.pop();
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int temp;
		cin>>temp;
		insert(temp);
	}
	if(pali()){
		cout<<"true";
		return 0;
	}
	cout<<"false";
	return 0;
	// print();
}
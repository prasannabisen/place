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
int kths(int k){
	Node *temp=head;
	int ans;
	while(temp->next!=NULL or temp!=NULL){
		int n=k;
		ans=temp->data;
		cout<<ans;
		while(n--){
			temp=temp->next;
		}
	}
	return ans;
}
void print(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	int temp;
	cin>>temp;
	while(temp!=-1){
		insert(temp);
		cin>>temp;
	}
	print();
	int k;
	cin>>k;
	cout<<kths(k);
	return 0;
}
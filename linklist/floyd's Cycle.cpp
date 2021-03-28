#include<iostream>
using namespace std;

bool detectCycle(Node *head){
	Node *slow=head;
	Node *fast=head;
	{
		while(fast!=NULL and fast->next!=NULL){
			fast=fast->next->next;
			slow=slow->next;
			if(fast==slow){
				return 0;
			}
		}
	}
	return 1;
}

int main(){

}
#include<iostream>
using namespace std;
int main(){
	int b[10];
	cout<<sizeof(b)<<"\n";
	//alocation and dealocation by compiler
	//symbole table
	int n;
	cin>>n;
	int *a=new int[n];
	cout<<sizeof(a)<<"\n";
	//variable a that is created inside the static memory
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sizeof(a)<<"\n";
}
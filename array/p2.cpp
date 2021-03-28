#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int k,a[100];
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		int sum=0;
		for(int i=0;i<k;i++){
			sum+=a[i];
			if(sum<0){
				sum=0;
			}
		}
		cout<<sum<<"\n";
	}
}
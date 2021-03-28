#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int i=0,j=0;
	while(j<m){
		i=0;
		while(i<n){
			cout<<a[i][j]<<", ";
			++i;
		}
		j++;
		if(j==m){
			break;
		}
		i=n-1;
		while(i>=0){
			cout<<a[i][j]<<", ";
			--i;
		}
		j++;
	}
	cout<<"END";
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[32];
	int i=0;
	while(n){
	
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	int p=sizeof(arr[32])/sizeof(arr[0]);
	for(int j=i-1;j>=0;j--){
		cout<<arr[j]<<" ";
		
	}
}
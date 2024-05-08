#include<bits/stdc++.h>
using namespace std;
void fillprefixMax(int arr[],int n,int prefixMaxSum[]){
	prefixMaxSum[0]=arr[0];
	for(int i=1;i<n;i++){
		prefixMaxSum[i]=max(prefixMaxSum[i-1],prefixMaxSum[i-1]+arr[i]);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int prefixMaxSum[n];
	fillprefixMax(a,n,prefixMaxSum);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
}
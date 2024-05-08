#include<bits/stdc++.h>
using namespace std;
void fillPrefixSum(int arr[],int n,int prefixSum[]){
	prefixSum[0]=arr[0];
	for(int i=1;i<n;i++){
		prefixSum[i]=prefixSum[i-1]+arr[i];
		
	}

}

int main(){
	int n;
	cin>>n;
	int a[n]; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int prefixSum[n];
	fillPrefixSum(a,n,prefixSum);
	for(int i=0;i<n;i++){
		cout<<prefixSum[i]<<' ';
	}
	
	
}


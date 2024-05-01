#include<bits/stdc++.h>
using namespace std;
void nearestpower2(int arr[],int n){
	for(int i=0;i<n;i++){
		int lg=log2(arr[i]);
		int a=pow(2,lg);
		int b=pow(2,lg);
		if(((arr[i] - a) < (b - arr[i]))) cout<<a<<' ';
		else cout<<b<<' ';
}}
int main(){
	int a[]={5,2,7,12};
	int n=sizeof(a)/sizeof(a[0]);
	nearestpower2(a,n);
	return 0;
	
}
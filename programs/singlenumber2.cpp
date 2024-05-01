#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k=0;
	int a[n];
	int b[n/2];
	int c[n/2];
	int d=0,e=0;
	int ans1=0,ans2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans^=a[i];
	}
	for(int i=0;i<32;i++){
		if((ans>>i)&1){
			k=i;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if((a[i]>>k & 1)){
			b[d]=a[i];
			d++;
			ans1^=a[i];
		}
		else{
			c[e]=a[i];
			e++;
			ans2^=a[i];
		}
	}
	
	for(int i=0;i<d||i<e;i++){
		ans1^=b[i];
		ans2^=c[i];
	}
	cout<<ans1<<" "<<ans2;
}
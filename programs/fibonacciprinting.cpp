#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0,b=1;
	cin>>n;
	cout<<a<<b;
	for(int i=0;i<n-2;i++){
		int c=a+b;
		cout<<c;
		a=b;
		b=c;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	string s,t;
	cin>>s>>t;
	int a1[n];
	int a2[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(t[i]==s[j]){
				a1[i]=j+1;
				break;
			}
		}
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=m-1;j>=0;j--){
			if(t[i]==s[j]){
				a2[i]=j+1;
				break;
			}
		}
	}
	

	
	int max=0;
	for(int i=0;i<n-1;i++){
		int p=a2[i+1]-a1[i];
		if(p>max) max=p;
		
	}
	cout<<endl;
	cout<<max;
	
	
}
	

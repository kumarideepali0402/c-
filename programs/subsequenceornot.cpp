#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	string s,t;
	cin>>s>>t;
	int i=0;
	int j=0;
	int count=false;
    while(i<s.size() && j<s.size()){
		if(s[i]==t[j]){
			i++;
			j++;
		}
		else{
			i++;
		}
		
		
	}
	if(j==t.size()) count=true;
	cout<<count;
}
	

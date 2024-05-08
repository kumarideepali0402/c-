#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>=97 && s[i]<=122){
			a=a^(1<<s[97-int(s[i])]);
			
		}
	
	
	}
	int count=0;
	while(a){
		count+=a&1;
		a>>=1;
	}	
	if(count>1) cout<<"false";
	else cout<<"true";
		
	}
	



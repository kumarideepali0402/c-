#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
	
	if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='Y' && s[i]!='y'){
		if(int(s[i])<97)
		cout<<'.'<<char(int(s[i])+32);
		else cout<<'.'<<s[i];
	}
}
}
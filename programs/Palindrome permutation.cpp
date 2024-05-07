#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int a[26];
	for(int i=0;i<26;i++){
		a[i]=0;	}
	for(int j=0;j<26;j++){
		(a[int(str[j])-97])+=1;
	}
	int odd_char=0;
	for(int i=0;i<26;i++){
		if(a[i]%2!=0) odd_char++;
	}
	if(odd_char>1){
		cout<<("no");
	}
	else cout<<"true";
}
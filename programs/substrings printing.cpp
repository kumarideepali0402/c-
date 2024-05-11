#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	for(int i=1;i<=str.size();i++){
		for(int j=0;j<=str.size()-i;j++){
			int p=i+j-1;
			for(int k=j;k<=p;k++){
				cout<<str[k]<<" ";
			}
			cout<<endl;
		}
	}
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i=0;
	int j=str.size()-1;
	bool isPalindrome=true;
	while(i<j){
		if(str[i]!=str[j]) {
		   isPalindrome=false;
		   break;
		   }
	i++;
	j--;
	}
	
	if(isPalindrome) cout<<"true";
	else cout<<"false";
	
	return 0;
	
}




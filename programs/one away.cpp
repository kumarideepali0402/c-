#include<bits/stdc++.h>
using namespace std;
bool onereplace(string s1,string s2){
	int misplace=0;
	for(int i=0;i< s1.size();i++){
		
			if(s1[i]!=s2[i])
			 misplace++;
	}
	if (misplace==1) return true;
	else 
	return false;
}
bool oneinsert(string s1,string s2){
	int i=0;
	int j=0;
	int count=0;
	while(i<s1.size() || j<s2.size())
	{
	         if(s1[i]!=s2[j])
	         {
	 			count++;
	 			j++;
			 }
			 else 
			 {
			 	i++;
			 	j++;
			 }
		 
	 }
	 if(count==1) return true;
	 else return false;
}
int oneaway(string s1,string s2){
	int n;
	n=s1.length();
	int m;
	m=s2.length();
	if(m==n) return onereplace(s1,s2);
	else if(m+1==n) return oneinsert(s2,s1);
	else if(n+1==m) return oneinsert(s1,s2);
	else return false;
}
int main(){
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	cout<<oneaway(str1,str2);
	
	
	
	
}
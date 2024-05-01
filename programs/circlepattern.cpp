#include<bits/stdc++.h>
using namespace std;
int dist(int x,int y){
		return (sqrt(pow(x,2)+pow(y,2)));
		}
int main(){
	int r;
	cin>>r;
	for(float i=0;i<r;i+=0.5){
		for(int j=0;j<r;j+=0.5){
			if(dist(i,j)<=r){
				cout<<("* ");
			}
			else cout<<(" ");
			
		}
		cout<<endl;
	}

}
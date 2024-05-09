#include<bits/stdc++.h>
using namespace std;

int main(){
	int m;
	int n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=1;j<n;j++){
			a[i][j]+=a[i][j-1];
			
			
		}
		
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]+=a[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	if(((r1==0&&c1!=0)&&(r2==0&&c2!=0))||((r1!=0&&c1==0)&&(r2!=0&&c2==0))) cout<<a[r2][c2];
	else cout<<a[r2][c2]+a[r1][c1]-a[r1-1][c2]-a[r2][c1-1];
	
}
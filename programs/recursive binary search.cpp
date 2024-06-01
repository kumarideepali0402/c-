#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector <int>& arr,int low,int high,int target){
		if(high<low) return -1;
		int mid=(low+high)/2;
		if(arr[mid]==target) return arr[mid];
		if(arr[mid]<target) return binarySearch(arr,mid+1,high,target);
		return binarySearch(arr,low,mid-1,target);
}

int search(vector<int>& arr,int target){
	return binarySearch(arr,0,arr.size()-1,target);
}
		
	
int main(){
	vector<int> nums={1,2,3,4,5};
	int t;
	cin>>t;
	int k=search(nums,t);
	if(k==-1) cout<<"not present";
	else cout<<"present"; 

}



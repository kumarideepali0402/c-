#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string k;
        cin>>k;
        int ans=0;
        for(int j=0;j<k.size();j++){
            if (k[j]==1){
                for(int p=j+1;p<k.size();p++){
                    if(k[p]==0){
                        int l=p;
                    
                    
                    for(int u=j;u<=p;u++){
                        if(k[u]>k[u+1]){
                            int temp=k[u];
                            k[u]=k[u+1];
                            k[u+1]=temp;
                        }
                        ans=p-j+1;
                    }}


                }
            }

        }
        cout<<ans;
    }

}
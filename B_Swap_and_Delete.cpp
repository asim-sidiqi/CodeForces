#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        string check;
        cin>>check;
        int count0=0, count1=0;
        for(int i=0; i<check.size(); i++){
            if(check[i]=='0') count0++;
            else count1++;
        }

        int ans=0;

        for(int i=0; i<check.size(); i++){
            if((check[i]=='0' && count1==0) || check[i]=='1' && count0==0) ans=check.size()-i; 
            if(check[i]=='0') count1--;
            else count0--;
        }

        cout<<ans<<endl;
    }
}
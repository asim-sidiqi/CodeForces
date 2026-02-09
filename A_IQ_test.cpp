#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int co=0, ce=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
        if(a%2==0) ce++;
        else co++;
    }

    int ans=0;

    if(co>ce){
        for(int i=0; i<n; i++){
            if(arr[i]%2==0) ans=i+1;
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0) ans=i+1;
        }
    }

    cout<<ans;
}
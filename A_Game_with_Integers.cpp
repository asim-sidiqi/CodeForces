#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "Second";
        if((n-1)%3==0 || (n+1)%3==0) s="First";

        cout<<s<<endl;
    }
}
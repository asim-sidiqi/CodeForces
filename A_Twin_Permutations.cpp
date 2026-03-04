#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp=n;
        vector<int> ans;
        while(temp--){
            int x;
            cin>>x;
            ans.push_back(n+1-x);
        }
        

        for(int it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
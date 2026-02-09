#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int> m;
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        string ans="NO";
        for(int i=0; i<n; i++){
            m[arr[i]]++;
            if(m[arr[i]]>=2){
                ans="YES";
                break;
            }
        }

        cout<<ans<<endl;
    }
}
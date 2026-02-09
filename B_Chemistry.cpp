#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        int odd=0;
        unordered_map<char,int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        } 
        
        for(auto it:m){
            if(it.second%2!=0) odd++;
        }

        cout<< (k<odd-1 ? "NO" : "YES")<<endl;
    }
}
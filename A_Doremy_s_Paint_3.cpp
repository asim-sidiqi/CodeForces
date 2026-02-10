#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> m;
        set<int> s;
        for(int i=0; i<n; i++){
            cin>>v[i];
            m[v[i]]++;
            s.insert(v[i]);
        }

        if(s.size()>2) cout<<"No"<<endl;
        else if(s.size()==1) cout<<"Yes"<<endl;
        else{
            vector<int> v2;
            for(auto it:s){
                v2.push_back(m[it]);
            }

            if(v2[0]!=v2[1] && v2[0]!=v2[1]+1 && v2[0]!=v2[1]-1){
                cout<<"No"<<endl;
            }
            else cout<<"Yes"<<endl;
        }
    }
}
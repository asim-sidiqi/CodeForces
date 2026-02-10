#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        unordered_map<int,int> m;

        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            m[temp]++;
        }

        if(m.size()>2) cout<<"No"<<endl;
        else if(m.size()==1) cout<<"Yes"<<endl;
        else{
            auto it = m.begin();
            int fir = it->second;
            it++;
            int sec = it->second;

            cout<<(abs(fir-sec)>1 ? "No" : "Yes")<<endl;
        }
    }
}
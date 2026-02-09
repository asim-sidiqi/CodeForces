#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;

    string ans="YES";
    vector<pair<int,int>> drag;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        drag.push_back({x,y});
    }

    sort(drag.begin(),drag.end());

    for(int i=0; i<n; i++){
        if(s<=drag[i].first){
            ans="NO";
            break;
        }

        s+=drag[i].second;
    }

    cout<<ans;
}
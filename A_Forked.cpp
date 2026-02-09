#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k1,k2;
        cin>>k1>>k2;
        int q1,q2;
        cin>>q1>>q2;

        set<pair<int,int>> s = {
            {a,b},{a,-b},{-a,-b},{-a,b},
            {b,a},{b,-a},{-b,-a},{-b,a}
        };
        set<pair<int,int>> king, queen;

        for (auto move : s) {
            king.insert({k1 + move.first, k2 + move.second});
            queen.insert({q1 + move.first, q2 + move.second});
        }

        int count = 0;

        for (auto p : king) {
            if (queen.count(p)) {
                count++;
            }
        }

        cout<<count<<endl;
    }
}
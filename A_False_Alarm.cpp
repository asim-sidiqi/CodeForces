#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int n,x;
        cin>>n>>x;
        vector<int> rooms(n);
        int l=INT_MAX, r=INT_MIN;

        for(int j=0; j<n; j++){
            cin>>rooms[j];
            if(rooms[j]==1){
                l=min(l,j);
                r=max(r,j);
            }
        }

        if(r-l+1>x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
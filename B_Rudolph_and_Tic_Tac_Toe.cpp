#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> arr;
        unordered_map<string,int> m;
        for(int i=0; i<3; i++){
            string row;
            cin>>row;
            arr.push_back(row);
            m[row]=1;
        }

        string col="";

        for(int i=0; i<3; i++){
            col+=arr[0][i];
            col+=arr[1][i];
            col+=arr[2][i];
            m[col]=1;
            col="";
        }

        string diag="";

        for(int i=0; i<3; i++){
            diag+=arr[i][i];
        }

        m[diag]=1;

        string antidiag="";

        for(int i=0; i<3; i++){
            antidiag+=arr[i][3-1-i];
        }

        m[antidiag]=1;

        string ans="DRAW";

        if(m["XXX"]) ans="X";
        if(m["OOO"]) ans="O";
        if(m["+++"]) ans="+";

        cout<<ans<<endl;
    }
}
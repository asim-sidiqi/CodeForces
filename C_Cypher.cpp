#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> final(n);
        for(int i=0; i<n; i++){
            cin>>final[i];
        }

        vector<string> moves;
        for(int i=0; i<n; i++){
            int m;
            string st;
            cin>>m>>st;

            moves.push_back(st);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<moves[i].size(); j++){
                if(moves[i][j]=='D'){
                    final[i]++;
                    if(final[i]>9) final[i]-=10;
                }
                else{
                    final[i]--;
                    if(final[i]<0) final[i]+=10;
                }
            }
        }

        for(int it:final){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
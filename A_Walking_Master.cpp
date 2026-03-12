#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b>d) cout<<-1<<endl;
        else{
            int upMoves = d-b;
            a+=upMoves;
            if(a<c) cout<<-1<<endl;
            else{
                int backMoves = a-c;
                cout<<upMoves+backMoves<<endl;
            }
        }
    }
}
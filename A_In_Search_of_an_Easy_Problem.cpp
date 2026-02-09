#include<iostream>
using namespace std;
int main(){
    string ans="EASY";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int op;
        cin>>op;
        if(op==1) ans="HARD";
    }

    cout<<ans;
}
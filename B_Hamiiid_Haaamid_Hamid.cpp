#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string rooms;
        cin>>rooms;
        int countL=0, countR=0;
        
        for(int i=0; i<n; i++){
            if(i<x-1 && rooms[i]=='.') countL++; 
            else if(i>x-1 && rooms[i]=='.') countR++; 
        }

        cout<<min(countL,countR)<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> arr;
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        char temp;
        
        if(arr[0][0]!='?') temp=arr[0][0];
        else temp=arr[0][1];

        for(int i=0; i<2; i++){
            if(arr[i][0]!='?') temp^=arr[i][0];
            if(arr[i][1]!='?') temp^=arr[i][1];
            if(arr[i][2]!='?') temp^=arr[i][2];
        }

        cout<<temp<<endl;
    }
}
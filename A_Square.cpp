#include<bits/stdc++.h>
using namespace std;
int main(){
    string msg;
    string gen;
    cin>>msg;
    cin>>gen;

    vector<string> arr;
    int l=0, r=0;
    while(r<msg.size()){
        if(msg[r]==' '){
            arr.push_back(msg.substr(l,r-l+1));
            r++;
            l=r;
        }
        else r++;
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i][0]=='a' || arr[i][0]=='e' || arr[i][0]=='i' ||arr[i][0]=='o' ||arr[i][0]=='u'){
            arr[i]+=gen;
            for(int j=0; j<i+1; j++) arr[i]+='z';
        }
        else{
            char temp = arr[i][0];
            arr[i].erase(0,1);
            arr[i]+=temp;
            arr[i]+=gen;
            for(int j=0; j<i+1; j++) arr[i]+='z';
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
        cout<<" ";
    }
}
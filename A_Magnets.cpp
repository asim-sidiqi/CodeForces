#include<iostream>
#include<vector> 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> pos;
    for(int i=0; i<n; i++){
        int magnet;
        cin>>magnet;
        pos.push_back(magnet);
    }

    int ans=0;
    for(int i=0; i<n; i++){
        if(pos[i]==pos[i+1]) continue;
        else ans++;
    }

    cout<<ans;
}
#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    queue<pair<int,int>> q;
    for(int i=0; i<n; i++){
        q.push({arr[i],i});
    }

    while(!q.empty()){
        if(q.size()==1) break;
        
        pair<int,int> temp = q.front();
        q.pop();
        if(temp.first-m>0){
            q.push({temp.first-m,temp.second});
        }

    }

    cout<<q.front().second+1;
}
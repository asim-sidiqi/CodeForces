#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        bool check = false;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int mini = INT_MAX;
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                check=true;
            }
            mini = min(mini, abs(arr[i]-arr[i-1]));
        }

        if(check==true) cout<<"0"<<endl;
        else cout<<(mini/2)+1<<endl;
    }
}
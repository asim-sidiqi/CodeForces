#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        int temp;

        for(int i=0; i<n; i++){
            if(arr[i]!=arr[i+1]){
                temp=i;
                break;
            }
        }

        if(temp==n-1) cout<<-1<<endl;
        else{
            vector<int> b,c;
            for(int i=0; i<n; i++){
                if(i<=temp) b.push_back(arr[i]);
                else c.push_back(arr[i]);
            }

            cout<<b.size()<<" "<<c.size()<<endl;

            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}
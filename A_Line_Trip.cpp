#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int maxi = INT_MIN;

        for(int i=0; i<n-1; i++){
            maxi = max(maxi,(v[i+1]-v[i]));
        }

        maxi = max(maxi,v[0]);

        cout<<max(maxi,(x-v[n-1])*2)<<endl;
    }
}
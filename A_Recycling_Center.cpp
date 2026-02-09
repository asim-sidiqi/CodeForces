#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,c;
        cin>>n>>c;

        vector<int> trash(n);
        for(int j=0; j<n; j++){
            cin>>trash[j];
        }

        sort(trash.begin(),trash.end());
        reverse(trash.begin(),trash.end());

        int k=0;
        int ans=0;
        for(int j=0; j<n; j++){
            if(trash[j]*(1<<k)<=c){
                ans++;
                k++;
            }
        }

        cout<<n-ans<<endl;
    }
}
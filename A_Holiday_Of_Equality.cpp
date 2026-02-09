#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> welf(n);
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>welf[i];
        maxi=max(maxi,welf[i]);
    }

    int ans=0;
    for(int i=0; i<n; i++){
        ans+=abs(welf[i]-maxi);
    }

    cout<<ans;
}
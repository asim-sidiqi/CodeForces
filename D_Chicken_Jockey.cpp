#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int& ans){
    if(arr.size()==0){
        return;
    }
    auto it=max_element(arr.begin(),arr.end());
    if(it!=arr.begin()) it--;
    int i=it-arr.begin();
    ans+=(*it);
    vector<int> arrLeft;
    for(int m=0; m<i; m++){
        arrLeft.push_back(arr[m]);
    }

    vector<int> arrRight;
    for(int m=i+1;m<arr.size();m++){
        arrRight.push_back(arr[m]);
    }

    if(arrRight.size()!=0) arrRight[0]-=arrLeft.size();
    cout<<ans<<arr[0]<<" ";
    solve(arrLeft,ans);
    solve(arrRight,ans);
    return;
}
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

        int ans=0;
        solve(arr,ans);
        cout<<ans<<endl; 
    }
}
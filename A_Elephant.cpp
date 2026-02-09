#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5]={5,4,3,2,1};
    int ans=0;
    for(auto i:arr){
        ans+=n/i;
        n%=i;
        if(n==0) break;
    }
    cout<<ans;
}
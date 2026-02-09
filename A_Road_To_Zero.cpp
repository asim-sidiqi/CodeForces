#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n; i++){
        int x,y;
        cin>>x>>y;
        int a,b;
        cin>>a>>b;

        int ans=0;
        ans+=b*(min(x,y));
        ans+=a*(abs(x-y));

        cout<<ans<<endl;
    }
}
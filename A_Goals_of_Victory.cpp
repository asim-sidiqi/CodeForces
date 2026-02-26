#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        n--;
        while(n--){
            int x;
            cin>>x;
            sum+=x;
        }

        cout<<(0-sum)<<endl;
    }
}
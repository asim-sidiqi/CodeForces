#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mini = INT_MAX;
    while(n--){
        int x;
        cin>>x;
        mini = min(mini, abs(x));
    }

    cout<<mini;
}
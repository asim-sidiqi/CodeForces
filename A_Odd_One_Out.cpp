#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }

    cout<<count;
}
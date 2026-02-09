#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,x,y;
        cin>>a>>x>>y;
        if((a>=x && a<=y) || (a>=y && a<=x)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
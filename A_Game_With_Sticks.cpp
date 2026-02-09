#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    int temp=n*m;
    for(int i=0; i<2*temp; i++){
        if(n==0 || m==0){
            ans=i;
            break;
        }

        n--;
        m--;     
    }

    if(ans%2==0) cout<<"Malvika";
    else cout<<"Akshat";
}

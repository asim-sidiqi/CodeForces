#include<iostream>
using namespace std;
int main(){
    int64_t n,m,a;
    cin>>n>>m>>a;
    int64_t ans=0;
    int check1=0;
    int check2=0;
    if(n%a!=0) check1=1;
    if(m%a!=0) check2=1;

    ans+=(n/a+check1)*(m/a+check2);

    cout<<ans;
}
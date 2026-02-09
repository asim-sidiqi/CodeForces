#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;

        string ans="YES";

        if((a==0 && b>=3) || ((c-a)==0 && (d-b)>=3) || (a>=3 && b==0) || ((c-a)>=3 && (d-b)==0)) ans="NO";

        if(ceil(b/(a+1))>=3 || ceil((d-b)/((c-a)+1))>=3 || ceil(a/(b+1))>=3 || ceil((c-a)/((d-b)+1))>=3) ans="NO";

        cout<<ans<<endl;
    }
}
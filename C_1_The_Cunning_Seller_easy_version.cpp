#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int x;
        for(int i=0; i<20; i++){
            if((long long)pow(3,i) == n){
                x=i;
                break;
            }
            else if((long long)pow(3,i) > n){
                x=i-1;
                break;
            }
        }

        long long temp=0;
        long long ans=0;

        while(x>=0){
            while(temp<n){
                temp+=(long long)pow(3,x);
                ans+=((long long)pow(3,x+1)+ x*((long long)pow(3,x-1)));
            }

            if(temp>n){
                temp-=(long long)pow(3,x);
                ans-=((long long)pow(3,x+1)+ x*((long long)pow(3,x-1)));
            }
            
            x--;
        }

        cout<<ans<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string team;
    cin>>team;

    int l=0,r=1;
    int maxi=1;
    while(r<team.size()){
        if(team[r]==team[r-1]){
            maxi=max(maxi,r-l+1);
            r++;
        }
        else{
            l=r;
            r++;
            maxi=max(maxi,r-l+1);
        }
    }

    cout<< (maxi>=7 ? "YES" :"NO");
}
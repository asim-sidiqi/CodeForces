#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;

    int l=0, r=1;
    while(r<st.size()){
        if(st[l]!=st[r]){
            st.erase(l,2);
            if(l>0) l--;
            if(r>1) r--;
        }
        else{
            r++;
            l++;
        }
    }

    cout<<st.size();
}
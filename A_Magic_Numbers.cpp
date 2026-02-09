#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans="NO";
    string temp=to_string(n);
    
    int l=0,r=0;
    int maxi=INT_MIN;
    while(r<temp.size()){
        if(temp[r]=='4'){
            r++;
        }
        else{
            r++;
            l=r;
        }

        maxi=max(maxi,r-l);
    }

    if(maxi<3) ans="YES";
    if(temp[0]=='4') ans="NO";

    for(auto it:temp){
        if(it!='1' && it!='4') ans="NO";
    }
    cout<<ans;
    cout<<endl;
    cout<<"maxi:"<<maxi<<endl;
    cout<<"r"<<r<<"l"<<l<<endl;
}
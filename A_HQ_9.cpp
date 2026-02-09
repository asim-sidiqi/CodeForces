#include<iostream>
using namespace std;
int main(){
    string temp;
    string ans="NO";
    cin>>temp;
    for(int i=0; i<temp.size(); i++){
        if(temp[i]=='H' || temp[i]=='Q' || temp[i]=='9'){
            ans="YES";
            break;
        }
    }
    cout<<ans;
}
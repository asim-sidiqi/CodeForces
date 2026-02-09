#include<iostream>
#include <cctype> 
#include <algorithm>
using namespace std;
int main(){
    string input;
    cin>>input;
    bool check=true;
    int count=0;
    string ans=input;
    int n=input.size();
    for(int i=0; i<n; i++){
        if(isupper(input[i])) count++; 
        if(i>0 && islower(input[i])) check=false;
    }

    if(count==n){
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
    }
    
    else if(check==true){
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        ans[0]=toupper(ans[0]);
    }

    cout<<ans;
}

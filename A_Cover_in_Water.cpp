#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool boom=false;
        int count = 0;
        int i=0;
        while(i<n){
            if(s[i]=='.') count++;
            if(i>1 && s[i]=='.' && s[i-1]=='.' && s[i-2]=='.'){
                boom = true;
            }
            i++;
        }

        cout<<(boom ? 2 : count)<<endl;
    }
}
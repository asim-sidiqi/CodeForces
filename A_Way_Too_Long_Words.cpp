#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string w;
    for(int i=0; i<n; i++){
        cin>>w;
        if(w.size()>10){
            string ans;
            ans+=w[0];
            string len = to_string(w.size()-2);
            ans+=len;
            ans+=w[w.size()-1];
            cout<<ans<<endl;
        }
        else cout<<w<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        if(k>1) cout<<"YES"<<endl;
        else{
            bool rev = true;
            int i=0;
            while(i<n-1){
                if(v[i+1]<v[i]){
                    rev = false;
                    break;
                }
                i++;
            }

            if(rev==false) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
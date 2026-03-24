#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> arr(n);
        int countTwo=0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2) countTwo++;
        }

        if(countTwo%2!=0){
            cout<<-1<<endl;
        }
        else{
            int count=0;
            for(int i=0; i<n; i++){
                if(arr[i]==2) count++;
                if(count==countTwo/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

        
    }
}
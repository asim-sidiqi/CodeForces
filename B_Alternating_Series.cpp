#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int negCount=0, posCount=0, count3=0, count2=0;
        if(n%2!=0){
            negCount=(n/2)+1;
            posCount=(n/2);
            count3=(n/2);
        }
        else{
            negCount=(n/2);
            posCount=(n/2);
            count3=(n/2)-1;
            count2=1;
        }

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(negCount>0){
                ans.push_back(-1);
                negCount--;
            }

            if(posCount>0){
                if(count3>0) ans.push_back(3);
                count3--;
                posCount--;
            }
        }

        if(count2) ans.push_back(2);

        for(int it:ans){
            cout<<it<<" ";
        }

        cout<<endl;
    }
}
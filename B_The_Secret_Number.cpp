#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size=to_string(n).size();
        int m=n%10;
        vector<long long> arr;
        for(int i=1; i<=size; i++){
            if(size%i==0 && (size/i)%2==0){
                string temp;
                for(int j=0; j<(size/i)-1; j++){
                    if(j%2==0){
                        for(int k=0; k<i; k++){
                            temp+=to_string(m);
                        }
                    }
                    else{
                        for(int k=0; k<i; k++){
                            temp+=to_string(0);
                        }
                    }
                }
                arr.push_back(stoll(temp));
            }
        }

        sort(arr.begin(),arr.end());

        if(size%2!=0) arr={};
        string check=to_string(n);
        for(int i=0; i<size-1; i++){
            if(check[i]!=check[i+1]){
                arr={};
                break;
            }
        }

        if(arr.size()>0){
            cout<<arr.size()<<endl;
            for(int it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<arr.size()<<endl;
        }
    }
}

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int zeroes=0;
        int sum=0;
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            if(temp==0) zeroes++;
            sum+=temp;
        }

        cout<<sum+zeroes<<endl;
    }
}
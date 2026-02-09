#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;

    int ques=0;

    while(k--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b+c >= 2) ques++; 
    }

    cout<<ques;
    return 0;
}
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    int maxi = INT_MIN;
    int a_1=(a+b)*c;
    int a_2=(a*b)+c;
    int a_3=a+(b*c);
    int a_4=a*(b+c);
    int a_5=a+b+c;
    int a_6=a*b*c;
    maxi=max(a_1,max(a_2,max(a_3,max(a_4,max(a_5,a_6)))));

    cout<<maxi;
}
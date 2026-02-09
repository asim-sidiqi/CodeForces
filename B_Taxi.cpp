#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0, count2=0, count3=0, count4=0;
    int ans=0;
    vector<int> groups(n,0);
    for(int i=0; i<n; i++){
        cin>>groups[i];
        if(groups[i]==1) count1++;
        else if(groups[i]==2) count2++;
        else if(groups[i]==3) count3++;
        else if(groups[i]==4) count4++;
    }

    ans+=count4;
    ans+=count2/2;
    int temp=count2%2;

    if(count3==count1){
        ans+=count3;
        ans+=temp;
    }

    else{
        if(count3>count1){
            ans+=count3;
            ans+=temp;
        }
        else if(count1>count3){
            ans+=count3;
            count1-=count3;
            count1+=temp;
            if(count1%4==0) ans+=count1/4;
            else if(count1%4!=0) ans+=count1/4+1;
        }
    }

    cout<<ans;
}
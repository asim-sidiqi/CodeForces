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
    vector<int> groups;
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
        ans+=max(count3,count1);
    }

    cout<<ans;
}
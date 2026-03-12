#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int64_t count=0;

    vector<int> houses;
    for(int i=0; i<m; i++){
        int houseNo;
        cin>>houseNo;
        houses.push_back(houseNo);
    }

    int p=1;

    for(int i=0; i<m; i++){
        if(houses[i]>=p) count+=(houses[i]-p);
        else count+=(n-(p-houses[i]));
        p=houses[i];
    }

    cout<<count;
}
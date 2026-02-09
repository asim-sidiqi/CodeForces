#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> d1(n);
        for(int i=0; i<n; i++){
            cin>>d1[i];
        }
        vector<int> d2(n);
        for(int i=0; i<n; i++){
            cin>>d2[i];
        }
        vector<int> d3(n);
        for(int i=0; i<n; i++){
            cin>>d3[i];
        }
        
        vector<pair<int,int>> v1;
        vector<pair<int,int>> v2;
        vector<pair<int,int>> v3;

        for(int i=0; i<n; i++){
            v1.push_back({d1[i],i});
            v2.push_back({d2[i],i});
            v3.push_back({d3[i],i});
        }

        auto cmp = [](auto& a, auto& b){ return a.first>b.first;};
        
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
        sort(v3.begin(),v3.end(),cmp);

        int maxi=INT_MIN;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(v1[i].second!=v2[j].second && v2[j].second!=v3[k].second && v1[i].second!=v3[k].second){
                        maxi=max(maxi,v1[i].first+v2[j].first+v3[k].first);
                    }
                }
            }
        }

        cout<<maxi<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int m;
//         cin>>m;
//         vector<int> arr(m);
//         for(int i=0; i<m; i++){
//             cin>>arr[i];
//         }

//         int n=arr.size();
//         int l=0, r=n-1;
//         pair<int,int> ans={-1,-1};

//         while(r>l){
//             auto maxi = *max_element(arr.begin()+l,arr.begin()+r+1);
//             auto mini = *min_element(arr.begin()+l, arr.begin()+r+1);

//             if(arr[l]==maxi || arr[l]==mini){
//                 l++;
//                 continue;
//             }
//             else if(arr[r]==maxi || arr[r]==mini){
//                 r--;
//                 continue;
//             }
//             else{
//                 ans={l,r};
//                 break;
//             }
//         }

//         if(ans.first==-1) cout<<-1<<endl;
//         else cout<<ans.first+1<<" "<<ans.second+1<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int sz=temp.size();

        int l=0, r=n-1, tl=0, tr=sz-1;
        pair<int,int> ans={-1,-1};
        while(l<r || tl<tr){
            if(arr[l]==temp[tl] || arr[l]==temp[tr]){
                if(arr[l]==temp[tl]){
                    l++;
                    tl++;
                    continue;
                }
                else if(arr[l]==temp[tr]){
                    l++;
                    tr--;
                    continue;
                }
            }
            else if(arr[r]==temp[tl] || arr[r]==temp[tr]){
                if(arr[r]==temp[tl]){
                    r--;
                    tl++;
                    continue;
                }
                else if(arr[r]==temp[tr]){
                    r--;
                    tr--;
                    continue;
                }
            }
            else{
                ans={l,r};
                break;
            }
        }

        if(ans.first==-1) cout<<-1<<endl;
        else cout<<ans.first+1<<" "<<ans.second+1<<endl;
    }
}
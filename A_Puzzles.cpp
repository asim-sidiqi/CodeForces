#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> puzzle;
    for(int i=0; i<m; i++){
        int pieces;
        cin>>pieces;
        puzzle.push_back(pieces);
    }

    sort(puzzle.begin(),puzzle.end());

    int i=0;
    int j=n-1;

    int mini=INT_MAX;

    while(j<m){
        mini=min(mini,abs(puzzle[i]-puzzle[j]));
        i++;
        j++;
    }
    cout<<mini;
}
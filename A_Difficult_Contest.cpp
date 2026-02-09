#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string contest;
        cin>>contest;

        int countF=0,countN=0,countT=0;
        for(int i=0; i<contest.size(); i++){
            if(contest[i]=='F') countF++;
            if(contest[i]=='N') countN++;
            if(contest[i]=='T') countT++;
        }

        string s = contest;

        while (s.find("F") != string::npos) {
            s.erase(s.find("F"), 1);
        }


        while (s.find("N") != string::npos) {
            s.erase(s.find("N"), 1);
        }

        while (s.find("T") != string::npos) {
            s.erase(s.find("T"), 1);
        }

        for(int i=0; i<countT; i++){
            s+='T';
        }
        for(int i=0; i<countN; i++){
            s+='N';
        }
        for(int i=0; i<countF; i++){
            s+='F';
        }
        

        cout<<s<<endl;
    }
}
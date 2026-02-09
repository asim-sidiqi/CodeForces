#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        bool sawZero = false;
        set<int> positives;
        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            if (x == -1) 
                continue;
            if (x == 0) 
                sawZero = true;
            else
                positives.insert(x);
        }

        
        if (sawZero || positives.size() > 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}

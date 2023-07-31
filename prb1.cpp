//Codeforces Round #828 (Div. 3)
//codeforces.com/contest/1744
//A. Number Replacement
//The letters corresponding to the same numbers must be the same
//MehrazSWEmu

#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
const int N = 55;

void solve () {
    int n;
    cin >> n;
    vector <int> v[N];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x].push_back (i);
    }

    string s;
    cin >> s;
    for (int i = 1; i <= 50; i++) {
        if (v[i].empty ())  continue;
        for (int j = 1; j < v[i].size (); j++) {
            if (s[v[i][j]] != s[v[i][j-1]]) {
                puts ("NO");
                return ;
            }
        }
    }
    puts ("YES");
}

int main () {
    int t;
    cin >> t;
    while (t --)    solve ();
}

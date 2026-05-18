#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
 
        vector<pair<ll,int>> v;
 
        for (int i = 1; i <= n; i++) {
            ll a;
            cin >> a;
 
            ll rem = a % k;
 
            if (rem == 0)
                rem = k;
 
            v.push_back({rem, i});
        }
 
        sort(v.begin(), v.end(), [](auto &p1, auto &p2) {
            if (p1.first == p2.first)
                return p1.second < p2.second;
 
            return p1.first > p2.first;
        });
 
        for (auto &x : v)
            cout << x.second << " ";
 
        cout << '
';
    }
 
    return 0;
}
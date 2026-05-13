#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        ll n, k;
        cin >> n >> k;
 
        vector<ll> a(n * k);
 
        for (ll i = 0; i < n * k; i++) {
            cin >> a[i];
        }
 
        ll rightCount = n / 2;
 
        ll idx = n * k - rightCount - 1;
 
        ll ans = 0;
 
        for (ll i = 0; i < k; i++) {
            ans += a[idx];
            idx -= (rightCount + 1);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
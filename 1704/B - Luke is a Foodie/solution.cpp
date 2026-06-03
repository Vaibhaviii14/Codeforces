#include <bits/stdc++.h>
using namespace std;
 
// Fast I/O
#define ios_fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
// Data Types
#define ll long long
#define vi vector<int>
#define vll vector<long long>
 
// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
 
// Macros
#define all(x) x.begin(), x.end()
#define pb push_back
#define REP(i, n) for (int i = 0; i < n; ++i)
 
// Modular Arithmetic
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a * b) % MOD; }
 
int main() {
    ios_fast;
    int t;
    cin >> t;
    while (t--) {
        // Problem logic here
        ll  n,x;
        cin>>n>>x;
        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
 
        ll ans=0;
 
        ll l=v[0]-x;
        ll r=v[0]+x;
 
        for(int i=1;i<n;i++){
            ll nl=v[i]-x;
            ll nr=v[i]+x;
 
            l=max(l,nl);
            r=min(r,nr);
 
            if(l>r){
                ans++;
                l=nl;
                r=nr;
            }
        }
 
        cout<<ans<<endl;
        
 
                
            
        
    }
    return 0;
}
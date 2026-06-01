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
        ll w,h;
        cin>>w>>h;
        ll kx1,kx2,ky1,ky2;
        vector<ll> x1,x2,y1,y2;
        cin>>kx1;
        for(ll i=0;i<kx1;i++){
            ll val;
            cin>>val;
            x1.push_back(val);
        }
 
        cin>>kx2;
        for(ll i=0;i<kx2;i++){
            ll val;
            cin>>val;
            x2.push_back(val);
        }
 
        cin>>ky1;
        for(ll i=0;i<ky1;i++){
            ll val;
            cin>>val;
            y1.push_back(val);
        }
 
        cin>>ky2;
        for(ll i=0;i<ky2;i++){
            ll val;
            cin>>val;
            y2.push_back(val);
        }
 
        ll ans=0;
        ll val1=(x1[x1.size()-1]-x1[0])*h;
        ll val2=(x2[x2.size()-1]-x2[0])*h;
        ll val3=(y1[y1.size()-1]-y1[0])*w;
        ll val4=(y2[y2.size()-1]-y2[0])*w;
 
        ans=max(val1,max(val2,max(val3,val4)));
 
        cout<<ans<<endl;
 
        
 
                
            
        
    }
    return 0;
}
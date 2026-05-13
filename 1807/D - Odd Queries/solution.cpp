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
        ll n,q;
        cin>>n>>q;
        vll v(n);
        int sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
 
        vll pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+v[i-1];
        }
 
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            int ans=sum-pre[r]+pre[l-1]+(r-l+1)*k;
            if(ans%2!=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
 
                
            
        
    }
    return 0;
}
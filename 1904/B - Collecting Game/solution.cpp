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
        ll n;
        cin>>n;
        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<pair<ll,ll>> ans;
        for(int i=0;i<n;i++){
            ans.push_back({v[i],i});
        }
        sort(ans.begin(),ans.end());
        vll pre(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=ans[i].first;
            pre[i]=sum;
        }
 
        
        vector<ll> reach(n);
        reach[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            if(pre[i]>=ans[i+1].first){
                reach[i]=reach[i+1];
            }else{
                reach[i]=i;
            }
        }
        vll a(n);
 
        for(int i=0;i<n;i++){
            a[ans[i].second]=reach[i];
        }
 
 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
 
        cout<<endl;
    
 
        
 
        
        
        
 
                
            
        
    }
    return 0;
}
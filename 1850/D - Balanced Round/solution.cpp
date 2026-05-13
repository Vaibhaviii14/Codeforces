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
        ll n,k;
        cin>>n>>k;
        vll v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
 
        sort(v.begin(),v.end());
        ll count=0,maxi=0;
        for(ll i=n-1;i>0;i--){
            if(v[i]-v[i-1]<=k){
                count++;
            }else{
                count=0;
            }
 
            maxi=max(count,maxi);
        }
 
        cout<<n-maxi-1<<endl;
            
        
    }
    return 0;
}
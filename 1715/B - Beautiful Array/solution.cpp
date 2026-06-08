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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll mini=b*k;
        ll maxi=b*k+n*(k-1);
 
        if(s<mini|| s>maxi){
            cout<<-1<<endl;
            continue;
        }
 
        vll v(n,0);
        v[0]=b*k;
        ll rem=s-b*k;
        for(int i=0; i<n && rem>0;i++){
            ll add=min(rem,k-1);
            v[i]+=add;
            rem-=add;
        }
 
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
 
        cout<<endl;
 
        
 
                
            
        
    }
    return 0;
}
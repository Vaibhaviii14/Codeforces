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
    
    
        // Problem logic here
        ll n,d;
        cin>>n>>d;
        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        int l=0,r=n-1;
        int wins=0;
        while(l<=r){
            int need=d/v[l]+1;
            if(r>=l+need-1){
                wins++;
                l++;
                r-=(need-1);
            }else{
                break;
            }
        }
 
 
        cout<<wins<<endl;
        
        
 
                
            
        
    
    
    return 0;
}
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
        int n,k;
        cin>>n>>k;
        vll v(n);
        int even=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) even++;
        }
 
        int ans=INT_MAX;
        if(k==4){
            if(even>=2){
                ans=0;
            }else{  
                ans=2-even;              
                for(int i=0;i<n;i++){
                    int value=v[i]%k;
                    ans=min(ans,k-value);
                    if(value==0) ans=0;
                }
            }
        } else{
            for(int i=0;i<n;i++){
            int val=v[i]%k;
            ans=min(ans,k-val);
            if(val==0) ans=0;
 
 
            }
        }
 
        cout<<ans<<endl;
        
 
             
            
        
    }
    return 0;
}
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
        string s;
        cin>>s;
        int l=0,r=0;
        int count=0,mini=INT_MAX;
        while(r<n){
            if(s[r]=='W'){
                count++;
            }
            if(r-l+1==k){
                mini=min(mini,count);
                if(s[l]=='W'){
                    count--;
                }
 
                l++;
            }
 
            r++;
 
        }
 
        cout<<mini<<endl;
        
 
                
            
        
    }
    return 0;
}
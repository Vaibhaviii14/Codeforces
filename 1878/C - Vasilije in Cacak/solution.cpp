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
        ll n,k,x;
        cin>>n>>k>>x;
        ll mini=0,maxi=0;
        ll l=1,r=n;
        mini=k*(k+1)/2;
        maxi=(2*n*k-k*k+k)/2;
        
 
        if(x>=mini && x<=maxi){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
        
 
                
            
        
    }
    return 0;
}
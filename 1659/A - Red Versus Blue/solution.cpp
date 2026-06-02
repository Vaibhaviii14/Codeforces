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
        ll n,r,b;
        cin>>n>>r>>b;
        string s;
        int gaps=b+1;
        int base=r/gaps;
        int extra=r%gaps;
 
        for(int i=0;i<gaps;i++){
            for(int j=0;j<base;j++){
                s+='R';
            }
            if(extra>0){
                s+='R';
                extra--;
            }
 
            if(i<b){
                s+='B';
            }
        }
 
        cout<<s<<endl;
 
        
 
                
            
        
    }
    return 0;
}
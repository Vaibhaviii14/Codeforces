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
        ll x,n;
        cin>>x>>n;
        if(n%4==0) cout<<x<<endl;
        else if(n%4==1){
            if(x%2==0) cout<<x-n<<endl;
            else cout<<x+n<<endl;
        }else if(n%4==2){
            if(x%2==0) cout<<x+1<<endl;
            else cout<<x-1<<endl;
        }else if(n%4==3){
            if(x%2==0) cout<<x+n+1<<endl;
            else cout<<x-n-1<<endl;
        }
            
        
    }
    return 0;
}
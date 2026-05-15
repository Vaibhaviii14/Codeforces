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
        ll a,b,c;
        cin>>a>>b>>c;
        string ans="NO";
        //case1 if m is multiplied to a
        if(2*b-c>0 && (2*b-c)%a==0){
            ans="YES";
        }
        //case2 if m is multiplied to b
        if((c+a)%(2*b)==0){
            ans="YES";
        }
        //case3 if m is multiplied to c
        if(2*b-a>0 && (2*b-a)%c==0){
            ans="YES";
        }
 
        cout<<ans<<endl;  
 
                
            
        
    }
    return 0;
}
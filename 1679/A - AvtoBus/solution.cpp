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
// ll solve(ll n){
//     if(n%2!=0 ||n<4) return {-1};
//     int mini=0,maxi=0;
//     if(n%6==0){
//         mini=n/6;
//     }
//     if(n%6==2 || n%6==4){
//         mini=n/6+1;
//     }
 
//     if(n%4==0 || n%4==2){
//         maxi=n/4;
//     }
    
//     return {mini,maxi};
 
 
// }
int main() {
    ios_fast;
    int t;
    cin >> t;
    while (t--) {
        // Problem logic here
        ll n;
        cin>>n;
        if(n%2!=0 ||n<4){ cout<<-1<<endl; continue;}
 
        ll mini=0,maxi=0;
        if(n%6==0){
            mini=n/6;
        }
        if(n%6==2 || n%6==4){
            mini=n/6+1;
        }
 
        if(n%4==0 || n%4==2){
            maxi=n/4;
        }
    
        cout<<mini<<" "<<maxi<<endl;
        
        
        
 
                
            
        
    }
    return 0;
}
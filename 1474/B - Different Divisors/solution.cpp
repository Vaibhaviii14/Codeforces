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
bool isPrime(ll n){
    if(n<2) return false;
    for(ll i=2;i*i<=n;i++){
         if(n%i==0){
            return false;
         }
    }
 
    return true;
}
 
ll nextPrime(ll x){
    while(!isPrime(x)){
        x++;
    }
 
    return x;
}
int main() {
    ios_fast;
    int t;
    cin >> t;
    while (t--) {
        // Problem logic here
        ll d;
        cin>>d;
 
        ll p=nextPrime(d+1);
        ll q=nextPrime(p+d);
 
        cout<<p*q<<endl;
        
 
                
            
        
    }
    return 0;
}
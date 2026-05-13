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
        int n;
        cin>>n;
        vll v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        int count=0;
        for(int i=n-1;i>0;i--){
            while(v[i-1]!=0 && v[i]<=v[i-1]){
                v[i-1]/=2;
                count++;
            }
            if(v[i]==0){
                count=-1;
                break;
            }
        }
        
        cout<<count<<endl;
                
            
        
    }
    return 0;
}
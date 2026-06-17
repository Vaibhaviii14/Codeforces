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
        ll n;
        cin>>n;
        vll v(n);
        bool neg=true;
        ll maxEl=LLONG_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0){
                neg=false;
            }
            maxEl=max(maxEl,v[i]);
        }
        ll sum=0,maxi=LLONG_MIN;
        for(int i=0;i<n-1;i++){
            sum+=v[i];
            if(sum<0){
                sum=0;
            }
            maxi=max(maxi,sum);
            if((v[i]&1)==(v[i+1]&1)){
                sum=0;
            }            
        }
        sum+=v[n-1];
        maxi=max(maxi,sum);
 
        if(neg){
            cout<<maxEl<<endl;
        }else{
            cout<<maxi<<endl;
        }
        
        
                
            
        
    }
    return 0;
}
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
        for(int i=0;i<n;i++) cin>>v[i];
        int freq=1,maxi=1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                freq++;
            }
            else freq=1;
 
            maxi=max(maxi,freq);
        }
        if(n==1|| maxi==n){
            cout<<0<<endl;
        }else{
            int count=0;           
            while(maxi<n){
                count++;  
                if(maxi*2<=n){
                    count+=maxi;
                    maxi*=2;
                }else{
                    count+=n-maxi;
                    maxi=n;
                }
                        
            }
            cout<<count<<endl;
        }
        
        
 
                
            
        
    }
    return 0;
}
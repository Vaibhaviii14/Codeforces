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
        vll a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
 
        unordered_map<int,int> mp1,mp2;
        int count=1;
 
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                count++;
            }else{
                mp1[a[i]]=max(mp1[a[i]],count);
                count=1;
            }
        }
 
        mp1[a[n-1]]=max(mp1[a[n-1]],count);
        count=1;
 
        for(int i=0;i<n-1;i++){
            if(b[i]==b[i+1]){
                count++;
            }else{
                mp2[b[i]]=max(mp2[b[i]],count);
                count=1;
            }
        }
 
        mp2[b[n-1]]=max(mp2[b[n-1]],count);
        
        int ans=0;
 
        for(auto it:mp1){
            ans=max(ans,it.second+mp2[it.first]);
        }
        
        for(auto it:mp2){
            ans=max(ans,it.second+mp1[it.first]);
        }
 
        cout<<ans<<endl;
 
        
 
        
        
        
        
 
        
 
 
                
            
        
    }
    return 0;
}
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
        ll n,p;
        cin>>n>>p;
        vll a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
 
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            v.push_back({b[i],a[i]});
        }
 
        sort(v.begin(),v.end());
        ll count=1,sum=p;
        int i=0;
 
        while(count<n && i<n){
            int el=v[i].second;
            while(el>0 && count<n){
                sum+=min(p,v[i].first);
                count++;
                el--;
            }
           
            i++;
        }
 
        cout<<sum<<endl;
 
 
        
 
                
            
        
    }
    return 0;
}
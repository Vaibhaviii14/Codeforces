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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<pair<ll,ll>> vec(n);
        for(int i=0;i<n;i++){
            vec.push_back({v[i],i});    
        }
 
        sort(vec.rbegin(),vec.rend());
 
        map<ll,ll> mp;
 
        vll ans(n+1);
        ans[0]=0;
        ll odd=1,even=1;
        for(int i=1;i<=n;i++){
            if(i%2==1){
                ans[i]=odd;
                odd++;
            }else{
                ans[i]=-1*even;
                even++;
            }
        }
        
        for(int i=0;i<n;i++){
            mp[vec[i].second]=ans[i+1];
        }
 
        
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(vec[i].first*2*ans[i+1]);
        }
 
        cout<<sum<<endl;
 
        cout<<ans[0]<<" ";
        for(auto it:mp){
            cout<<it.second<<" ";
        }
        cout<<endl;
        
        //hellooo
 
                
            
        
    }
    return 0;
}
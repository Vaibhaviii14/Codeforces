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
        vector<int> v(n);
        int mini=INT_MAX, maxi=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]);
        }
        int ans=0;
        vector<int> b;
        vector<int> c;
        if(mini==maxi){
            ans=-1;
        }else{
            for(int i=0;i<n;i++){
                if(v[i]==1){
                    b.push_back(v[i]);
                }else{
                    if(v[i]!=maxi){
                        b.push_back(v[i]);
                    }else{
                        c.push_back(v[i]);
                    }
                }
            }
        }
        
        if(mini==maxi){
            cout<<ans<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
 
                
            
        
    }
    return 0;
}
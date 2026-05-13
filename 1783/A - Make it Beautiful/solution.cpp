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
        int mini=INT_MAX,maxi=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]);
        }
 
        if(mini==maxi){
            cout<<"NO"<<endl;
        }else{
            swap(v[0],v[n-1]);
            if(v[0]==v[1]){
                swap(v[1],v[n-1]);
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        
 
        
    }
    return 0;
}
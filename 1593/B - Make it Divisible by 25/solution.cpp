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
        long long n;
        cin>>n;
        string s=to_string(n);
        
        int ans=INT_MAX;
        vector<string> v= {"00","25","50","75"};
        for(string x:v){
            int ops=0;
            int i=s.size()-1;
            while(i>=0 && s[i]!=x[1]){
                ops++;
                i--;
            }
 
            if(i<0) continue;
            i--;
            while(i>=0 && s[i]!=x[0]){
                ops++;
                i--;
            }
            if(i>=0){
                ans=min(ans,ops);
            }
        }
        
        
        cout<<ans<<endl;
                
            
        
    }
    return 0;
}
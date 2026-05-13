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
    int tc;
    cin >> tc;
    while (tc--) {
        // Problem logic here
        string s,t;
        cin>>s>>t;
        unordered_set<char> del;
        int j=t.length()-1;
        for(int i=s.length();i>=0;i--){
            if(j>=0 && s[i]==t[j]){
                if(del.find(s[i])!=del.end()){
                    continue;
                }else{
                    j--;
                }
            }else{
                del.emplace(s[i]);
            }
        }
 
        if(j<0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
                
            
        
    }
    return 0;
}
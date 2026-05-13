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
        string ans="";
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        if(n==2){
            ans="Yes";
        }else{
            sort(v.begin(),v.end());
            if(n%2==0){
                if(v[0]==v[n/2-1]&& v[n/2]==v[n-1]){
                    ans="Yes";
                }else{
                    ans="No";
                }
            }else{
                if((v[0]==v[n/2] && v[n/2+1]==v[n-1]) || (v[0]==v[n/2-1] && v[n/2]==v[n-1])){
                    ans="Yes";
                }else{
                    ans="No";
                }
            }
        }
 
        cout<<ans<<endl;     
            
        
    }
    return 0;
}
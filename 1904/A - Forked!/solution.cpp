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
 
int dx[4]={1,1,-1,-1}, dy[4]={1,-1,1,-1};
int main() {
    ios_fast;
    int t;
    cin >> t;
    while (t--) {
        int a,b,kx,ky,qx,qy;
        cin>>a>>b;
        cin>>kx>>ky;
        cin>>qx>>qy;
        set<pair<int,int>> king;
        set<pair<int,int>> queen;
 
        for(int i=0;i<4;i++){
            king.insert({kx+dx[i]*a,ky+dy[i]*b});
            king.insert({kx+dx[i]*b,ky+dy[i]*a});
            queen.insert({qx+dx[i]*a,qy+dy[i]*b});
            queen.insert({qx+dx[i]*b,qy+dy[i]*a});
        }
        
        int count=0;
        for(auto pos: king){
            if(queen.find(pos)!=queen.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
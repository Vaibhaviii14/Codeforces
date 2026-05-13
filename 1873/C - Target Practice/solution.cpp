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
        vector<vector<char>> matrix(10,vector<char> (10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>matrix[i][j];
            }
        }
        int points=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(matrix[i][j]=='X'){
                    int layer=min({i,j,9-i,9-j});
                    points+=layer+1;
                }
            }
        }
 
        cout<<points<<endl;
                
            
        
    }
    return 0;
}
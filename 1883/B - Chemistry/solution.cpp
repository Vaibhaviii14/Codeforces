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
bool isPalindrome(string s){
    int n=s.length();
    int l=0,r=n-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }else{
            l++;
            r--;
        }
    }
    return true;    
}
int main() {
    ios_fast;
    int t;
    cin >> t;
    while (t--) {
        // Problem logic here
        unordered_map<char,int> mp;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;               
        
            for(int i=0;i<n;i++){
                mp[s[i]]++;
            }
            int odd=0,even=0;
            for(auto it:mp){
                if(it.second%2==1){
                    odd++;
                }else{
                    even++;
                }               
            }
            if(odd==0|| (odd-k)==1 || (odd-k)<=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        
        
        
 
                
            
        
    }
    return 0;
}
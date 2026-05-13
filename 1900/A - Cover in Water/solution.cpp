#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int cnt = 0;
        int mx = 0;
 
        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }
 
        if(mx >= 3){
            cout << 2 << endl;
        } else {
            int dots = 0;
            for(char c : s){
                if(c == '.') dots++;
            }
            cout << dots << endl;
        }
    }
}
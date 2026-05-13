#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){       
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(),vec.end());
 
        int ans=1,cur=1;
        for(int i=1;i<n;i++){
            if(vec[i]==vec[i-1]){
                continue;
            }
 
            if(vec[i]==vec[i-1]+1){
                cur++;
                ans=max(ans,cur);
            }else{
                cur=1;
            }
        }
 
        cout<<ans<<endl;
    }
}
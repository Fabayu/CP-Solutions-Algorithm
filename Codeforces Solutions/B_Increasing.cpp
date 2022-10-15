#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define l long
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define PI 3.1416
#ifndef ONLINE_JUDGE
#define debug(x) cout<<(#x)<<" = "<<(x)<<"\n";
#else
#define debug(x) ;
#endif
// we only have to check if any number occurs more than once. if it does, then the array cannot be
// rearranged in a strictly increasing order
void solve(){
   int n;
    cin>>n;
   l int arr[n];
   map <int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int count=0;
    for(auto x:mp){
        if(x.second>1){
            count++;
        }
    }
    if(count!=0){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
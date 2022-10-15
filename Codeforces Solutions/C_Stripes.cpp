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
//We only have find whether a row made of only Red colour exists.
// If it exists, that means the last color entered was Red otherwise, last color entered is blue 
void solve(){
    char s[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>s[i][j];
        }
    }
    int countR=0;
    for(int i=0;i<8;i++){
        int count = 0;
        for(int j=0;j<8;j++){
            if(s[i][j]=='R'){
                count++;
            }
        }
        if(count==8){
         countR++;
        }
    }
    if(countR==0){
        cout<<"B"<<"\n";
    }
    else{
        cout<<"R"<<"\n";
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
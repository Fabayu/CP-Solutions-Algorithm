#include <bits/stdc++.h>
using namespace std;
//we only have to check if the corresponding colors are not red. If there exists a non-correspondence 
// then count will not be n
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;

    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string s;
	    cin>>s;
        string s1;
        cin>>s1;
        for(int i=0;i<n;i++){
            if(s[i]=='R'&&(s1[i]=='B'||s1[i]=='G')){
                cout<<"NO"<<"\n";
                break;
            }
            else if(s1[i]=='R'&&(s[i]=='B'||s[i]=='G')){
               cout<<"NO"<<"\n";
               break;
            }
            else{
             count++;
            } 
        }
        if(count==n){
            cout<<"YES"<<"\n";
        }
    }
}

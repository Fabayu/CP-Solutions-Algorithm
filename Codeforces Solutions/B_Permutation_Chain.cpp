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
// there are many ways to achieve decreasing fixedness of the array 
//However, the simplest way is to just swapping the (i)th and (i+1) index
void printarr( int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void solve(){
    int n;
    cin>>n;
    int n1=n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    cout<<n<<"\n";
   
        for(int i=0;i<n;i++){
           printarr(arr,n);
           int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
           cout<<"\n";
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
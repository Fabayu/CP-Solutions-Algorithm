#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &weight , vector<int> &value , int index , int capacity,vector<vector<int>> & dp){
    if(capacity==0 || index>= value.size()){
        return 0;
    }
    if (dp[index][capacity]!= -1){
return dp[index][capacity];
    }
    int include =0 ;
    if(weight[index]<=capacity){
        include = value[index] + solve(weight, value , index+1, capacity-weight[index],dp);
    }
    int exclude = solve(weight,value,index+1,capacity,dp);
    return dp[index][capacity]= max(include,exclude);
    
}
int solveTab(vector<int> val, vector<int> wt, int C, int n) {
    vector<vector<int> > dp(n+1, vector<int>(C+1, 0));

    for(int index = n-1; index>=0; index--) {
        for(int capacity =0; capacity <=C; capacity++) {

            int include = 0;

            if(capacity >= wt[index])
                include = val[index] + dp[index+1][capacity-wt[index]];

            int exclude = 0 + dp[index+1][capacity];

            dp[index][capacity] = max(include, exclude);
        }
    }


    /*for(int index = 0; index<=n; index++) {
        for(int capacity =0; capacity <=C; capacity++) {
            cout << dp[index][capacity] << " ";
        }
        cout << endl;
    }*/
    return dp[0][C];

}
int main(){
    int n=4;
    vector<int> weight ,value;
    weight.push_back(1);
     weight.push_back(2);
      weight.push_back(4);
    weight.push_back(5);
      value.push_back(5);
      value.push_back(4);
      value.push_back(8);
       value.push_back(6);
       int capacity=5;
       //vector<vector<int>> dp (n+1, vector<int>(capacity+1,-1));
      cout<< solveTab(weight , value,  capacity,n);

}

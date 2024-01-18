#include<bits/stdc++.h>
using namespace std;
int Fun(vector<int>&dp,int n){
    if(n == 0)return 0;
    if(n == 1)return 1;
    if(dp[n-1] == -1){
        dp[n-1] = Fun(dp,n-1);
    }
    if(dp[n-2] == -1){
        dp[n-2] = Fun(dp,n-2);
    }
    return dp[n-1]+dp[n-2];
    }
int main(){
    int n;
    cin>>n;
    vector<int>dp(n,-1);
    int y = Fun(dp,n);
    cout<<y;
}
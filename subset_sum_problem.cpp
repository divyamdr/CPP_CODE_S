#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    cin>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    bool dp[n+1][sum+1];
    for (int i = 0; i <= n; i++) 
        dp[i][0] = true;  
    for (int i = 1; i <= sum; i++) 
        dp[0][i] = false; 
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(j<a[i-1])
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
        }
    }
    cout<<dp[n][sum];
}
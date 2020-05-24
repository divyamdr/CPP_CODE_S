#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,change_amount;
    cin>>n>>change_amount;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int dp[n+1][change_amount+1];
    for(int j=0;j<n+1;j++)
    dp[j][0]=0;
    for(int i=0;i<change_amount+1;i++)
    dp[0][i]=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<change_amount+1;j++)
        {
            if(j>=a[i-1])
            dp[i][j]=max(dp[i-1][j],1+dp[i-1][j-a[i-1]]);
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][change_amount];

}
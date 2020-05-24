#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 
int main()
{
    int n,we;
    cin>>n>>we;
    int w[n],v[n],dp[n+1][we+1];
    for(int i=0;i<n;i++)
    cin>>w[i];
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<we+1;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;
            else if(w[i]<=we)
            dp[i][j]=max({v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]});
            else
            dp[i][j]=dp[i-1][j];
            
        }
    }
    cout<<dp[n][we];
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],lis[n];
    int ma=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        lis[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if(a[i]>a[j]&&lis[i]<lis[j]+1)
        lis[i]+=1;
        ma=max(ma,lis[i]);
        }
    }
    cout<<ma;
}

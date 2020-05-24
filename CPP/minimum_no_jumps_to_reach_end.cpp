#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int jump[n];
    jump[0]=0;
    for(int i=1;i<n;i++)
    jump[i]=INT_MAX-1;
    int result[n];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i<=j+a[j])
            {
                if(jump[i]>jump[j]+1)
                {
                    result[i]=j;
                    jump[i]=jump[j]+1;
                }
            }
        }
    }
    cout<<jump[n-1];
}
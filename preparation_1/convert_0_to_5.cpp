#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,res=0;
    cin>>n;
    int units=1;
    while(n>0)
    {

        if(n%10==0)
        {
        res=units*5+res;
        }
        else
        {
            res=(n%10)*units+res;
        }
        
        units=units*10;
        n=n/10;
    }
    cout<<res;
}
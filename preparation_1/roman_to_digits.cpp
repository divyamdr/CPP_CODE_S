#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int roman(char s)
{
    if(s=='I')
    return 1;
    if(s=='V')
    return 5;
    if(s=='X')
    return 10;
    if(s=='C')
    return 100;
    if(s=='D')
    return 500;
    if(s=='M')
    return 1000;
    return 0;
}
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.length();
    int res=0;
    while(i<j)
    {
        int k=roman(s[i]);
        if(i+1<j)
        {
        if(k>=roman(s[i+1]))
        res=res+k;
        else
        {
            res=res-k;
        }
        }
        else
        {
            res=res+k;
        }
        
        i++;
    }
    cout<<res;
}
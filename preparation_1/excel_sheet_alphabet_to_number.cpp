#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int convert(string s)
{
    int len=s.length(),res=0;
    for(int i=len-1;i>=0;i--)
    {
        res=res*26+((int)s[i]-'A'+1);
       // cout<<((int)s[i]-65+1)*pow(26,len-i-1)<<' ';
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<convert(s);
}
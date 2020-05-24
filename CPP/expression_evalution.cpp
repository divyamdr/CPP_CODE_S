#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,res,s1;
    cin>>s;
    string::iterator i;
    int flag=1;
    string infix;
    for(i=s.begin();i!=s.end();i++)
    {
        if(flag==0 and s1.length()!=0)
        {
            infix=infix+*i;
        }
        if(*i=='=')
        flag=1;
        else if(*i!='=' and flag==1)
        res=*i+res;
    }
}
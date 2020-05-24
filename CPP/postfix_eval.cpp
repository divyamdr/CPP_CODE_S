#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int fun(int a,int b,char i)
{
    //cout<<a<<' '<<b;
    if(i=='*')
    return a*b;
    if(i=='-')
    return a-b;
    if(i=='+')
    return a+b;
    if(i=='/')
    return a/b;
    if(i=='^')
    return a^b;
    else
    return 0;
}
int main()
{
    string s;
    cin>>s;
    stack<int> a;
    a.push('N');
    string::iterator i;
    int x,y;
    for(i=s.begin(); i!=s.end(); i++)
    {
        if((*i>='0')&&(*i<='9'))
        {
        int k=*i-48;
        a.push(k);
        cout<<a.top()<<endl;
        }
        else if(*i=='*'||*i =='/' ||*i=='-'||*i=='+'||*i=='^')
        {
            y=a.top();
            a.pop();
            x=a.top();
            a.pop();
            int k=fun(x,y,*i);
            cout<<x<<' '<<y<<' '<<k<<endl;
            a.push(k);
        }
       // cout<<*i<<endl;
    }
    cout<<a.top()<<endl;
    return 0;
}
//evaluting the postfix expression for single digits

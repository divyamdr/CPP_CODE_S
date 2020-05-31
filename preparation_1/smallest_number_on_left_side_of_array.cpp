#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    s.push(a[0]);
    for(int i=0;i<n;i++)
    {
            while(!s.empty() &&a[i]<=s.top())
            {                //cout<<s.top();
                s.pop();
            }
            if(s.empty())
            cout<<'-'<<' ';
            else
            {
                cout<<s.top()<<' ';
            }
            s.push(a[i]);   
    }
}
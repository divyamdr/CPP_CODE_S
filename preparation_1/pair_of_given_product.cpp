#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k%a[i]==0)
        if(s.find(k/a[i])!=s.end())
        {
        cout<<"exist";
        return 0;
        }
        s.insert(a[i]);

    }
}
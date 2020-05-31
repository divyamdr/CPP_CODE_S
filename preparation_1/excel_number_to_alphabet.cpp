#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string convert(int n)
{
    string s;
    s=(char)('A'+(n%26));
    n=n/26;
    while(n>0)
    {
        s=(char)('A'+(n-1)%26)+s;
        n=(n-1)/26;
    }
    return s;
}
int main()
{
    int x;
    cin>>x;
    cout<<convert(x);
}
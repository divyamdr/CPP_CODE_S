#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,k;
    cin>>a>>b;
    int len=a.length();
    string clock=b.substr(len-2,2)+b.substr(0, len-2);
    string anti=b.substr(2)+b.substr(0,2);
    cout<<clock<<' '<<anti;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float k=log(n+1)/log(2);
    if((log(n+1)/log(2))==k)
    cout<<"all set";
    else
    {
        cout<<"not set";
    }
    
}
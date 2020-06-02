#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float p;
    cin>>n;
    for(int i=2;i<sqrt(n+1);i++)
    {
    p=log(n)/log(i);
    if(ceil(p)==floor(p))
    break;
    }
    if(ceil(p)==floor(p))
    cout<<"Possible";
    else
    {
        cout<<"Not possible";
    }
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s2,s1;
    cin>>s1>>s2;
    int len=s1.length();
    string anti,clock;
    anti=s2.substr(2)+s2.substr(0,2);
    clock=s2.substr(len-2)+s2.substr(0,len-2);
    cout<<anti<<' '<<clock<<endl;
    if(s1.compare(anti)==0||s1.compare(clock)==0)
    cout<<"match";
    else
    {
        cout<<"not valid";
    }
    
}
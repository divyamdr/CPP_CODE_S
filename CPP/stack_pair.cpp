#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pair_display(pair<int,char> k)
{
    cout<<k.first<<k.second;
}
void display(stack<pair<int,char>> s)
{
     while (!s.empty()) { 
        pair_display(s.top()); 
        s.pop(); 
    } 
}
int main()
{
    stack<pair<int,char>> s;
    s.push({10,'a'});
    s.push({20,'k'});
    s.push({2,'b'});
    s.push({1,'i'});
    pair_display(s.top());
    display(s);
}
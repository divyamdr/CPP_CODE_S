#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
bool check(point l1,point l2,point r1,point r2)
{
    // If one rectangle is on left side of other 
    if (l1.x >= r2.x || l2.x >= r1.x) 
        return false; 
  
    // If one rectangle is above other 
    if (l1.y <= r2.y || l2.y <= r1.y) 
        return false;
    return true;
}
int main()
{
    point l1,r1,l2,r2;
    cin>>l1.x>>l1.y;
    cin>>r1.x>>r1.y;
    cin>>l2.x>>l2.y;
    cin>>r2.x>>r2.y;
    cout<<check(l1,l2,r1,r2);
}
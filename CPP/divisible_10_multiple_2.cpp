#include<iostream>

/***There is a number X with Hitesh. At once, he can multiply X by 2. The goal is to make X divisible by 10.

find the smallest number of steps necessary to do it (it may be possible to do it in zero steps) or determine that it is impossible.

Input:

A single integer denoting the initial value of X

Output:

For each test case, print a single line containing one integer — the minimum required a number of turns or -1 if there is no way to win the game.
***/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    if(t%10==0)
    cout<<0;
    else{
        if(t%5==0)
        cout<<1;
        else
        cout<<-1;
    }
    return 0;
}

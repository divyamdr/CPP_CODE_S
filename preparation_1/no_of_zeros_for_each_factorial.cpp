#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    int fives=5;
    int res=0;
    while(fives<=n)
    {
        res+=n/fives;
        fives=fives*5;
    }
    cout<<res;
}
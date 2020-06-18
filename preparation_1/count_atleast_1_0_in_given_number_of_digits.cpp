#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_digits;
    cin>>no_of_digits;
    int res=9*pow(10,no_of_digits-1)-pow(9,no_of_digits);
    cout<<res;
}
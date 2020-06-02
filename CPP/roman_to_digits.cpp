#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int roman_number[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string roman_symbols[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    string s;
    while(n>0)
    {
        int qu=n/roman_number[i];
        while(qu--)
        {
            s=s+roman_symbols[i];
        }
        n=n%roman_number[i];
        i--;
    }
    cout<<s;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b;
        cin>>a>>b;
        int r=a%b;
        //cout<<r<<endl;
        double res=r/(float)b;
        string s=to_string(res);
        //cout<<s<<endl;
        int len=s.size();
        double fina=0;
        for(int i=2;i<len&&i<n+2;i++)
        {
            fina+=(s[i]-'0');
            
        }
        cout<<fina<<endl;
    }
    return 0;
}

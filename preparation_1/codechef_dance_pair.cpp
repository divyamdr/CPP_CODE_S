#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0,n=s.length();
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            if((s[0]=='x'&& s[1]=='y')||(s[0]=='y'&& s[1]=='x'))
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<0<<endl;
                continue;
            }
        }
        int i=0;
        while(i<n-2)
        {
                if((s[i]=='x'&& s[i+1]=='y'&& s[i+2]=='x')||(s[i]=='y'&& s[i+1]=='x'&& s[i+2]=='y'))
                {
                    c++;
                    i=i+2;
                }
                else if((s[i]=='x'&& s[i+1]=='y')||(s[i]=='y'&& s[i+1]=='x'))
                {
                    c++;
                    i=i+2;
                }
                else
                i++;
               
        }
        if(i>=n-2&&(i+1)<n)
        {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
            c++;
        }
        cout<<c<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<string> v;
        vector<string> a;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<q;i++)
        {
            string s;
            cin>>s;
            int len=s.size();
            int j=0,k=0;
            for(int k=0;k<n;k++)
            {
                int count=0;
                string s1=v[k];
                if(s1.size()==len)
                    for(j=0;j<len;j++)
                        {
                            if(count>1)
                            break;
                            if(s1[j]!=s[j])
                            count++;
                        }
                if(count>1)
                continue;
                if(count==1)
                {
                cout<<s1<<endl;
                break;
                }
                else
                {
                    continue;
                }
                
            }
        }
    }
}
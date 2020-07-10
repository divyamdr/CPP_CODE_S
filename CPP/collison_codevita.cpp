#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  double a[n];
  long long x,y,z;
  for(int i=0;i<n;i++)
  {
    cin>>x>>y>>z;
    a[i]=pow((pow(x,2)+pow(y,2)),0.5)/z;
  }
  map<double,int> m;
  m.insert(pair<double, int>(a[0], 1));
  for(int i=1;i<n;i++)
    {
        //cout<<a[i]<<' ';
        if(m[a[i]])
            m[a[i]]++;
        else
            m[a[i]]=1;
    }
    
    map<double,int>::iterator itr; 
    long long res=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        res+=(itr->second*(itr->second-1))/2;
    }
    cout<<res;
}
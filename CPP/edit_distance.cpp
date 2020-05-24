#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    int m,n;
	    cin>>m>>n;
	    string a,b;
	    cin>>a>>b;
	    int k[m+1][n+1];
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0)
	            k[i][j]=j;
	            else if(j==i)
	            k[i][j]=i;
	            else if(a[i]==b[j])
	            k[i][j]=k[i-1][j-1];
	            else
	            k[i][j]=min({k[i-1][j-1],k[i][j-1],k[i-1][j]})+1;
	        }
	    }
	    cout<<k[m][n]<<a.length()<<b.length();
	}
	return 0;
}
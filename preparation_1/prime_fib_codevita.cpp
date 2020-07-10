#include<bits/stdc++.h>
using namespace std;
vector<int> SieveOfEratosthenes(int x,int n) 
{  
    vector<int> a;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    //int 
    for (int p=x; p<=n; p++) 
       if (prime[p]) 
          a.push_back(p);
    return a;
} 
bool find_prime(int n)
{
    if(n<=1)
    return false;
    if(n<=3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for(int i=4;i<=(pow(n,0.5)+1);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
long long fib(long long i,long long a,long long b)
{
    long long k;
    i=i-2;
    while(i--)
    {
        k=a+b;
        a=b;
        b=k;
    }
    return k;
}
int main()
{
    //cout<<find_prime(3731)<<endl;
    int small,large;
    cin>>small>>large;
    vector<int> a;
    a=SieveOfEratosthenes(small,large);
    set<int> s;
    int len=a.size();
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(i==j)
            continue;
            string s1=to_string(a[i])+to_string(a[j]);
            stringstream geek(s1); 
            int x = 0;
            geek >> x;
            s.insert(x);
        }
    }
    int c=0;
    len=s.size();
    //cout<<len<<endl;
    long long mi=INT_MAX;
    long long ma=INT_MIN;
    set<int>::iterator it = s.begin(); 
    for(it = s.begin(); it!=s.end();  ++it) 
    {
        if(find_prime(*it))
        {
            //cout<<<<' ';
        c++; 
        if(mi>*it)
        mi=*it;
        if(ma<*it)
        ma=*it;
        }
    }
    cout<<fib(c,mi,ma);
    //cout<<c<<' '<<mi<<' '<<ma<<endl;
}
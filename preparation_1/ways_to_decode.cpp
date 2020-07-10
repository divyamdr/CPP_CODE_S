#include<bits/stdc++.h>
using namespace std;
int functio(string a,int index,int len)
{
    //cout<<a<<endl;
    static int res=0;
    if(len==index||len<index)
    return 0;
    if(a[index]=='0')
    {
        functio(a,index+1,len);
        return 0;
    }
    if(index+1<len)
    {
    string s=a.substr(index,2);
    
    if(s<="26" && s>"1")
    {
        cout<<a[index]<<' '<<s<<" "<<index<<' '<<endl;
    res++;
    functio(a,index+2,len);
    }
    }
    functio(a,index+1,len);
    return res;
}
int main() {
    string A;
    cin>>A;
    int c= functio(A,0,A.size());
    cout<<c<<endl;
    
}


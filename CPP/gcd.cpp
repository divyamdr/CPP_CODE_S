#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    //std::cout << "hello, world" << std::endl;
    int a,b,c;
    cin>>a>>b;
    while(a>1)
    {
        //cout<<a<<' '<<b<<' '<<c<<endl;
        c=b%a;
        b=a;
        a=c;
    }
    cout<<b;
    return 0;
}

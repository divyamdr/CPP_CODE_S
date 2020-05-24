#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> a;
    stack<int> b;
    b.push(30);

    a.push(10); //push into the stack
    a.pop(); // removes the element from the stack
    a.push(10);
    a.swap(b); // swaping the elements in the stack
    int s=a.top(); // returns top element of the stack
    int k=a.size(); // returns length of the string
    bool l=a.empty();    //returns  1 if stack contains elements: 0 if not

}
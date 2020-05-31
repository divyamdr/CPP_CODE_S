#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int distance(pair<int,int> p1,pair<int,int> p2)
{
    //cout<<pow(p1.first-p2.first,2);
    return sqrt(pow(p1.first-p2.first,2)+pow(p1.second-p2.second,2));
}
int main()
{
    pair<int,int> p1;
    pair<int,int> p2;
    pair<int,int> p3;
    pair<int,int> p4;
    cin>>p1.first>>p1.second;
    cin>>p2.first>>p2.second;
    cin>>p3.first>>p3.second;
    cin>>p4.first>>p4.second;
    int d1=distance(p1,p2);
    int d2=distance(p2,p3);
    int d3=distance(p3,p4);
    int d4=distance(p4,p1);
    int dia1=distance(p1,p3);
    int dia2=distance(p2,p4);
    if((d1==d2)&&(d3==d4)&&(dia1==dia2)&&(d3==d1))
    cout<<"valid";
    else
    cout<<"not valid";

}
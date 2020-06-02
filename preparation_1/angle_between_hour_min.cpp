#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int hour,min;
    cin>>hour>>min;
    int hour_angle=0.5*(hour*60+min),min_angle=min*6;
    int angle= abs(hour_angle-min_angle);
    if(angle>(360-angle))
    angle=360-angle;
    cout<<angle<<endl;

}
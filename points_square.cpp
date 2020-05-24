#include<istream>
#include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
int differ(point p1,point p2)
{
    return pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2);
}
int main()
{
    point p1,p2,p3,p4;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    cin>>p3.x>>p3.y;
    cin>>p4.x>>p4.y;
    int dis1=differ(p1,p2);
    int dis2=differ(p2,p3);
    int dis3=differ(p3,p4);
    int dis4=differ(p1,p4);
    int dis5=differ(p2,p4);
    int dis6=differ(p1,p3);
    if((dis1==dis2==dis3==dis4)&&(dis5==dis6))
    cout<<"exists";
    else 
    cout<<"not";
}
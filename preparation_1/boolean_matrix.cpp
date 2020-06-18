#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    int matrix[rows][cols];
    int row[rows]={0},col[cols]={0};
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            int data;
            cin>>data;
            if(row[i]==1||col[j]==1||data==1)
            matrix[i][j]=1;
            else
            {
                matrix[i][j]=0;
            }
            if(data==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(row[i]==1||col[j]==1)
            cout<<'1'<<' ';
            else
            {
                cout<<'0'<<' ';
            }
            
        }
        cout<<endl;
    }
}
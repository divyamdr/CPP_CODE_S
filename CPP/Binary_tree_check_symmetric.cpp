#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct newnode{
    int data;
    newnode *left;
    newnode *right;
};
class BST{
    newnode *root;
    public:
    BST()
    {
        root=NULL;
    }
    bool isempty(){
        if(root==NULL)
        return true;
        else
        {
            return false;
        }
    }
    bool symmetric(newnode *root)
    {
        queue<newnode> q= new LinkedList<newnode>;
    }

};
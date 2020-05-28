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
    void insert(int newdata)
    {
        newnode *node=new newnode;
        node->data=newdata;
        node->left=NULL;
        node->right=NULL;
        if(isempty())
        {
        root=node;
        return;
        }
        newnode *parent,*ptr=root;
        while(ptr!=NULL)
        {
            parent=ptr;
            if(ptr->data<newdata)
            ptr=ptr->right;
            else
            {
                ptr=ptr->left;
            }
        }
        if(newdata<parent->data)
            {
            parent->left=node;
            //cout<<parent->data<<' '<<parent->left->data<<endl;
            }
            else
            {
                parent->right=node;
                //cout<<parent->data<<' '<<parent->right->data<<endl;
            }
        
    }
    public:
    int prev=INT_MIN;
    bool check(newnode *root)
    {
        if(root==NULL)
        return true;
        if(check(root->left)==false)return false;
        if(root->data<=prev)return false;
        prev=root->data;
        return check(root->right);
    }
    void final_check()
    {
        cout<<check(root);
    }

};
int main()
{
    BST b;
    b.insert(10);
    b.insert(20);
    b.insert(30);
    b.final_check();
}
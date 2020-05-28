#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int le,ri=0;
struct newnode{
    int data;
    newnode *left=NULL;
    newnode *right=NULL;
};

bool  final_check(newnode *root)
{
        if(root==NULL)
        return 0;
        if((root->right==NULL) && (root->left==NULL))
        return root->data;
        final_check(root->left);
        final_check(root->right);
        if(root->left->data+root->right->data==root->data)
        {
        return true;
        }
        else
        {
            return false;
        }
    }
void finorder(newnode *ptr)
    {
        if(ptr==NULL)
        return;
        finorder(ptr->left);
        cout<<ptr->data<<' ';
        finorder(ptr->right);
    }
int main()
{
    newnode *root=new newnode;
     root->data=10;
     newnode *k=new newnode;
     k->data=2;
     root->left=k;
     newnode *k1=new newnode;
     k1->data=8;
     root->right=k1;
     newnode *k2=new newnode;
     k2->data=4;
     root->right->left=k2;
     newnode *k3=new newnode;
     k3->data=4;
     root->right->right=k3;
     newnode *k4=new newnode;
     k4->data=1;
     root->left->left=k4;
     newnode *k5=new newnode;
     k5->data=1;
     root->left->right=k5;
cout<<final_check(root)<<endl;
finorder(root);
}
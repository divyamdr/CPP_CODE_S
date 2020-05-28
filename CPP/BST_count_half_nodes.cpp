#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int c=0;
struct newnode{
    int data;
    newnode *left;
    newnode *right;
};
class BST{
    newnode *root;
    public:
    BST(){
        root=NULL;
    }
    bool isempty(){
        if(root==NULL)
        return true;
        else
        return false;
    }
    void insert(int newdata)
    {
        newnode *node=new newnode;
        newnode *parent;
        node->data=newdata;
        node->left=NULL;
        node->right=NULL;
        if(isempty())
        root=node;
        else
        {
            newnode *ptr=root;
            while(ptr!=NULL)
            {
                parent=ptr;
                if(ptr->data<newdata)
                ptr=ptr->right;
                else
                ptr=ptr->left;
                
            }
            if(newdata<parent->data)
            parent->left=node;
            else
            parent->right=node;
            
        }
        
    }
    void count(newnode *ptr)
    {
        if(ptr->left==NULL && ptr->right==NULL)
        return;
        if((ptr->left==NULL && ptr->right!=NULL)||(ptr->left!=NULL && ptr->right==NULL))
        c++;
        count(ptr->left);
        count(ptr->right);
    }

};
int main()
{
    BST b;
    b.insert(10);
    b.insert(20);
    b.insert(30);
    b.inorder();
}
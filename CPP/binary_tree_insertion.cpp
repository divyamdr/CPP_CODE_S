#include<bits/stdc++.h>
#include<iostream>
using namespace std;
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
        {
            return false;
        }
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
            /* code */
            newnode *ptr=root;
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
        
    }
    void inorder()
    {
        finorder(root);
    }
    void finorder(newnode *ptr)
    {
        if(ptr==NULL)
        return;
        finorder(ptr->left);
        cout<<ptr->data<<' ';
        finorder(ptr->right);
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
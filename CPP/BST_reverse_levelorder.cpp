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
    newnode *prev;
    newnode *head;
    public:
    BST(){
        root=NULL;
        prev=NULL;
        head=NULL;
    }
    bool isempty()
    {
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
    void reverse_levelorder_display()
    {
        if(root==NULL) return;
        queue<newnode *> q;
        stack<int> s;
        q.push(root);
        int nodecount=q.size();
       //s.push(root->data);
       while(q.empty()==false)
       {
           root=q.front();
           q.pop();
           s.push(root->data);
           if(root->right)
           q.push(root->right);
           if(root->left)
           q.push(root->left);
       }
       while(s.empty()==false)
        {
            cout<<s.top()<<' ';
            s.pop();
        }

    }
};
int main()
{
    BST b;
    b.insert(20);
    b.insert(30);
    b.insert(10);
    b.insert(5);
    b.insert(15);
    b.insert(25);
    b.insert(40);
    b.insert(23);
    b.reverse_levelorder_display();

    return 0;

}
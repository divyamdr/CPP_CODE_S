#include<bits/stdc++.h>
#include <iostream> 
using namespace std;

// Representation of a node 
struct Node { 
	int data; 
	Node* next; 
}; 

// Function to insert node 
Node* insert(int item) 
{ 
	Node* temp = new Node; 
	temp->data = item; 
	temp->next = NULL; 
	return temp;
} 
Node* reverse(Node *root)
{

    Node *current;

    Node *second;
    current=root;
	Node *prev=NULL;
    while(current!=NULL)
    {       
		second=current->next;
		current->next=prev;
		prev=current;
		current=second;
    }
	return prev;
}
void display(Node* root) 
{ 
	cout<<"display"<<endl;
	while (root != NULL) { 
		cout << root->data << " "; 
		root = root->next; 
	} 
} 

Node *arrayToList(int arr[], int n) 
{ 
	Node *root = NULL;
	 Node *temp = NULL;
	for (int i = 0; i <n ; i++) 
	{
		//cout<<arr[i]<<" ";
	if(root==NULL)
	{
	root=insert(arr[i]);
	temp=root;
	}
	else
	{
		temp->next=insert(arr[i]); 
		temp=temp->next;
	}
	}
	return root; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	Node* root = arrayToList(arr, n); 
	//display(root); 
	root=reverse(root);
	display(root);
	return 0; 
	cout<<1<<0;
}

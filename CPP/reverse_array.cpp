#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int* printArr(int *arr, int size);


int main()
{
    int arr[20];
    int size;
    int *left = arr;  // Pointer to arr[0]
    int *right;


    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    int i=0;
    while(i < size)
    {
        scanf("%d", left++);
        i++;
    }

    printf("\nArray after reverse: ");
    int *res=printArr(arr, size);
    
}

int* printArr(int * arr, int size)
{
    // Pointer to arr[size - 1]
    int i=0,k;
    while(i < size) 
    {
        k=arr[i];
        arr[i]=arr[size-i];
        arr[size-i]=arr[i];
        i++;
    }
    return arr;
}
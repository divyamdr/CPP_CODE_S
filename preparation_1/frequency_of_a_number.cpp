 # include <bits/stdc++.h> 
using namespace std; 
int count(int arr[], int x, int n) 
{	 

int *low = lower_bound(arr, arr+n, x); 

if (low == (arr + n) || *low != x) 
	return 0; 
int *high = upper_bound(low, arr+n, x);	 

return high - low; 
} 
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c;
    cin>>c;
int k = count(a, c, n); 
printf(" %d occurs %d times ", k); 
return 0; 
} 

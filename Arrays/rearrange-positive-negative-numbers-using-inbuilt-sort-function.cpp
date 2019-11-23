#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {-12,11,-13,-5,6,-7,5,-3,-6}; 
  
    int n = sizeof(a)/sizeof(a[0]); 
    sort(a,a+n); 
  
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
}
#include<iostream>
using namespace std;

void moveZeros(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			a[count++] = a[i];
	}
	while(count<n)
		a[count++] = 0;
}

int main()
{
	int a[] = {1,2,0,4,3,0,5,0}; 
  
    int n = sizeof(a)/sizeof(a[0]); 
    moveZeros(a,n); 
  
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
}
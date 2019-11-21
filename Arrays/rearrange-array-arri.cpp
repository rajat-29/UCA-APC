#include<iostream>
using namespace std;

void arrangeArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] != -1 && a[i] != i)
		{
			int x = a[i];
			if(a[x] != -1 && a[x] != x)
			{
				int y = a[x];
				a[x] = x;
				x = y;
			}
			a[x] = x;
			if(a[i] != i)
			{
				a[i] = -1;
			}
		}
	}
}

int main()
{
	int a[] = {-1,-1,6,1,9,3,2,-1,4,-1}; 
  
    int n = sizeof(a)/sizeof(a[0]); 
    arrangeArray(a,n); 
  
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
}
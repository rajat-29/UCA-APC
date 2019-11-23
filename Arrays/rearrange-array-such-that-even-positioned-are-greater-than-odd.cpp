#include<iostream>
#include<algorithm>
using namespace std;

void arrangeEven(int a[],int n)
{
	sort(a,a+n);

	int p=0,q=n-1;
	int ans[n];

	for(int i=0;i<n;i++)
	{
		if((i+1)%2 == 0)
			ans[i] = a[q--];
		else
			ans[i] = a[p++];
	}

	for (int i=0; i<n; i++) 
        cout << ans[i] << " "; 
}

int main()
{
	int a[] = {1,3,2,2,5}; 
  
    int n = sizeof(a)/sizeof(a[0]); 
    arrangeEven(a,n);
}
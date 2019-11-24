#include<iostream>
using namespace std;

void rearrange(int a[],int n)
{
	int temp[n],k=0;
	for(int i=0,j=n-1;i<=n/2 || j>n/2;i++,j--)
	{
		temp[k++] = a[j];
		temp[k++] = a[i];
	}

	for(int i=0;i<n;i++)
		cout<<temp[i]<<" ";
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};

	int n1 = sizeof(a) / sizeof(a[0]);

	rearrange(a,n1);
}
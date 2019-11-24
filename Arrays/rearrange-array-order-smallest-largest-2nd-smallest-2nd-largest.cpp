#include<iostream>
#include<algorithm>
using namespace std;

void rearrangeArray(int a[],int n)
{
	sort(a,a+n);
	int temp[n],k=0;
	for(int i=0,j=n-1;i<=n/2 || j>n/2;i++,j--)
	{
		temp[k++] = a[i];
		temp[k++] = a[j];
	}

	for(int i=0;i<n;i++)
		cout<<temp[i]<<" ";
}

int main()
{
	int a[] = {5,8,1,4,2,9,3,7,6};

	int n1 = sizeof(a) / sizeof(a[0]);

	rearrangeArray(a,n1);
}
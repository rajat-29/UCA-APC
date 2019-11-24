#include<iostream>
using namespace std;

void rearrange(int a[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
		temp[a[i]] = i;
	}

	for(int i=0;i<n;i++)
		cout<<temp[i]<<" ";
}

int main()
{
	int a[] = {2,0,1,4,5,3};

	int n1 = sizeof(a) / sizeof(a[0]);

	rearrange(a,n1);
}
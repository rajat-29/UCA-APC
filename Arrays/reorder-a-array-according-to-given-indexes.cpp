#include<iostream>
using namespace std;

void reorder(int a[],int in[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
		temp[in[i]] = a[i]; 
	}

	for(int i=0;i<n;i++)
		cout<<temp[i]<<" ";
}

int main()
{
	int a[] = {10,11,12};
	int in[] = {1,0,2};

	int n1 = sizeof(a) / sizeof(a[0]);

	reorder(a,in,n1);
}
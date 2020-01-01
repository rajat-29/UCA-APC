#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	int pos[n] = {-1};
	int neg[n] = {0};
	int p=0,ne=0,j=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] >= 0)
			pos[p++] = arr[i];
		if(arr[i] < 0)
			neg[ne++] = arr[i];
	}
	for(int i=0;i<ne;i++)
	{
		if(neg[i] != 0)
			arr[j++] = neg[i];
	}
	for(int i=0;i<p;i++)
	{
		if(pos[i] != -1)
			arr[j++] = pos[i];
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {-12,11,-13,-5,6,-7,5,-3,-6};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
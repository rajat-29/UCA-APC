#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	int pos[n] = {-1};
	int neg[n] = {0};
	int p=0,ne=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
			pos[p++] = arr[i];
		if(arr[i]<0)
			neg[ne++] = arr[i];
	}
	p=0,ne=0;
	int k=0;
	for(int i=0;i<n;)
	{
		if(neg[ne] != 0)
		{
			arr[i++] = neg[ne];
			ne++;
		}
		if(pos[p] != -1)
		{
			arr[i++] = pos[p++];
		}
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
	int arr[] = {1,2,3,-4,-1,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
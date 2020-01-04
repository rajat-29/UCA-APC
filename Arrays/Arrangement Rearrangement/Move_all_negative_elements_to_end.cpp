#include<iostream>

using namespace std;

void moveElements(int arr[],int n)
{
	int pos[n] = {-1};
	int neg[n] = {0};
	int p=0,ne=0,k=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i] >= 0)
		{
			pos[p++] = arr[i];
		}
		else if(arr[i] < 0)
		{
			neg[ne++] = arr[i];
		}
	}
	for(int i=0;i<p;i++)
	{
		if(pos[i] != -1)
			arr[k++] = pos[i];
	}
	for(int i=0;i<ne;i++)
	{
		if(neg[i] != 0)
			arr[k++] = neg[i];
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
	int arr[] = {1,-1,3,2,-7,-5,11,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	moveElements(arr,n);
	printArray(arr,n);
}
#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
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
	for(int i=0,j=0;i<n;i++,j++)
	{
		if(j<p)
		{
			arr[i] = pos[j];
			i++;

		}
		if(j<ne)
		{
			arr[i] = neg[j];
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
	int arr[] = {-1,3,-5,6,3,6,-7,-4,-9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
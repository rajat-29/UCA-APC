#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(i%2 == 0 && arr[i] > arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
		if(i%2 != 0 && arr[i] < arr[i+1])
		{
			swap(arr[i],arr[i+1]);
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
	int arr[] = {6,4,2,1,8,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
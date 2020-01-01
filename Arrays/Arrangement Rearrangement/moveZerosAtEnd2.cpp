#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != 0)
			swap(arr[count++],arr[i]);
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
	int arr[] = {0,1,9,8,4,0,0,2,7,0,6,0,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
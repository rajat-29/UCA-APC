#include <iostream> 

using namespace std;

void reArrange(int arr[],int n)
{
	int temp[n];

	for(int i=0;i<n;i++)
	{
		temp[arr[i]] = i;
	}

	for(int i=0;i<n;i++)
	{
		arr[i] = temp[i];
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
	int arr[] = {1,3,0,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
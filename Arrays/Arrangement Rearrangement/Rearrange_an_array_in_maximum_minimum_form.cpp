#include<iostream>
#include<algorithm>

using namespace std;

void reArrange(int arr[],int n)
{
	sort(arr,arr+n);
	int temp[n];
	int index = 0;

	for(int i=0,j=n-1;i<=n/2 | j>n/2;i++,j--)
	{
		temp[index++] = arr[j];
		temp[index++] = arr[i];
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
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
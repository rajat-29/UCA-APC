#include<bits/stdc++.h> 

using namespace std;

void reArrange(int arr[],int n)
{
	sort(arr,arr+n);
	int index = 0;
	int temp[n];

	for(int i=0,j=n-1;i<=n/2 || j>n/2;i++,j--)
	{
		temp[index++] = arr[i];
		temp[index++] = arr[j];
	}

	for(int i=0;i<n;i++)
		arr[i] = temp[i];
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {5,8,1,4,2,9,3,7,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
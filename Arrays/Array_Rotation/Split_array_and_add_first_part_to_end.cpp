#include<iostream>

using namespace std;

void rotate(int arr[],int start,int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void splitAndAdd(int arr[],int n,int k)
{
	rotate(arr,0,k-1);
	rotate(arr,k,n-1);
	rotate(arr,0,n-1);
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {12,10,5,6,52,36};
	int n = sizeof(arr)/sizeof(arr[0]);

	splitAndAdd(arr,n,2);
	printArray(arr,n);
}
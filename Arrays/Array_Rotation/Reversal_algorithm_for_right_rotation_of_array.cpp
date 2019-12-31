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

void rightRotation(int arr[],int n,int k)
{
	rotate(arr,0,n-1);
	rotate(arr,0,k-1);
	rotate(arr,k,n-1);
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	rightRotation(arr,n,3);
	printArray(arr,n);
}
#include <iostream>

using namespace std;

void rotateArray(int arr[],int start,int end)
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

void leftRotate(int arr[],int n,int k)
{
	k = k%n;
	rotateArray(arr,0,k-1);
	rotateArray(arr,k,n-1);
	rotateArray(arr,0,n-1);
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int k;

	int arr[] = {1,3,5,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	k = 1;
	leftRotate(arr,n,k);
	printArray(arr,n);

	int arr1[] = {1,3,5,7,9};
	k = 3;
	leftRotate(arr1,n,k);
	printArray(arr1,n);

	int arr2[] = {1,3,5,7,9};
	k = 4;
	leftRotate(arr2,n,k);
	printArray(arr2,n);

	int arr3[] = {1,3,5,7,9};
	k = 6;
	leftRotate(arr3,n,k);
	printArray(arr3,n);
}
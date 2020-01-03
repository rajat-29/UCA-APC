#include<iostream>

using namespace std;

void moveZerosToEnd(int arr[],int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != 0)
			arr[count++] = arr[i];
	}
	while(count < n)
		arr[count++] = 0;
}

void rotate(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i] != 0 && (arr[i] == arr[i+1]))
		{
			arr[i] = 2*arr[i];
			arr[i+1] = 0;
			i++;
		}
	}
	moveZerosToEnd(arr,n);
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {2,2,0,4,0,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	rotate(arr,n);
	printArray(arr,n);
}
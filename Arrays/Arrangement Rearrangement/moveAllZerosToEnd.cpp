#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != 0)
			arr[count++] = arr[i];
	}
	while(count<n)
		arr[count++] = 0;
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {1,2,0,4,3,0,5,0};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
	printArray(arr,n);
}
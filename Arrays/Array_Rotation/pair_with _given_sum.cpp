#include<iostream>

using namespace std;

void findPair(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(arr[i] > arr[i+1])
			break;
	}
	int largest = i;
	int smallest = (i+1)%n;

	while(largest != smallest)
	{
		int sum = arr[largest] + arr[smallest];
		if(sum == key)
		{
			cout<<arr[largest]<<" "<<arr[smallest];
			break;
		}

		if(sum < key)
		{
			smallest = (smallest+1)%n;
		}
		else
		{
			largest = (n+largest-1)%n;
		}
	}
}

int main()
{
	int arr[] = {11,15,6,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr,n,16);
}
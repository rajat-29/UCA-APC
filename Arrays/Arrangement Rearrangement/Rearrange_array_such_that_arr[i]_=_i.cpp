#include<iostream>

using namespace std;

void reArrange(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] != -1 && arr[i] != i)
		{
			int temp = arr[i];

			while(arr[temp] != -1 && arr[temp] != temp)
			{
				int temp2 = arr[temp];
				arr[temp] = temp;
				temp = temp2;
			}

			arr[temp] = temp;

			if(arr[i] != i)
			{
				arr[i] = -1;
			}
		}
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
	int arr[] = {-1,-1,6,1,9,3,2,-1,4,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	reArrange(arr,n);
	printArray(arr,n);
}
#include<iostream>

using namespace std;

void rotateArray(int arr[],int n)
{
	int temp = arr[n-1];
	for(int i=n-1;i>0;i--)
		arr[i] = arr[i-1];
	arr[0] = temp;
}

void findMaxSum(int arr[],int n)
{
	int maxSum = 0;
	for(int i=0;i<n;i++)
	{
		maxSum = maxSum + (i*arr[i]);
	}

	for(int i=1;i<n;i++)
	{
		rotateArray(arr,n);
		int currSum = 0;
		for(int i=0;i<n;i++)
		{
			currSum = currSum + (i*arr[i]);
		}
		if(currSum > maxSum)
			maxSum = currSum;
	}
	cout<<maxSum<<"\n";
}

int main()
{
	int arr[] = {1,20,2,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	findMaxSum(arr,n);
}
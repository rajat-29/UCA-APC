#include<iostream>

using namespace std;

void findMaxSum(int arr[],int n)
{
	int result = 0;
	for(int i=0;i<n;i++)
	{
		int currSum = 0;
		for(int j=0;j<n;j++)
		{
			int index = (i+j)%n;
			currSum = currSum + j*arr[index];
		}
		if(currSum > result)
			result = currSum;
	}
	cout<<result<<"\n";
}

int main()
{
	int arr[] = {8,3,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	findMaxSum(arr,n);
}
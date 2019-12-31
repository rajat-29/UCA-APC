#include<iostream>

using namespace std;

int maxHammingDistance(int arr[],int n)
{
	int temp[2*n];
	int maxHamming = 0;

	for(int i=0;i<n;i++)
	{
		temp[i] = arr[i];
		temp[i+n] = arr[i];
	}
	
	for(int i=1;i<n;i++)
	{
		int k=0,currHamming = 0;
		for(int j=i;j<i+n;j++)
		{
			if(temp[j] != arr[k])
			{
				currHamming++;
			}
			k++;
		}

		if(currHamming == n)
			return n;

		if(currHamming > maxHamming)
			maxHamming = currHamming;
	}

	return maxHamming;
}

int main()
{
	int arr[] = {2,4,8,0};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<maxHammingDistance(arr,n)<<"\n";
}
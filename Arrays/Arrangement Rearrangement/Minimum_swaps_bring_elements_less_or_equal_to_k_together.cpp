#include<iostream>

using namespace std;

void reArrange(int arr[],int n,int k)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] <= k)
			count++;
	}

	int bad = 0;
	for(int i=0;i<count;i++)
	{
		if(arr[i] > k)
			bad++;
	}

	int ans = bad,i=0;
	for(int j=count;j<n;j++)
	{
		if(arr[i] > k)
			bad--;
		if(arr[j] > k)
			bad++;

		i++;

		if(bad<ans)
			ans = bad;
	}
	cout<<ans<<"\n";
}

int main()
{
	int arr[] = {2,7,9,5,8,7,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n,5);
}
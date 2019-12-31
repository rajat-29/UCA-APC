#include <bits/stdc++.h> 

using namespace std;

void reArrange(int arr[],int n)
{
	int even = n/2;
	int odd = n-even;

	int j = odd-1;

	int temp[n];
	for(int i=0;i<n;i++)
		temp[i] = arr[i];

	sort(temp,temp+n);

	for(int i=0;i<n;i+=2)
	{
		arr[i] = temp[j];
		j--;
	}

	j = odd;

	for(int i=1;i<n;i+=2)
	{
		arr[i] = temp[j];
		j++;
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
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	reArrange(arr,n);
	printArray(arr,n);
}
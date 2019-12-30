#include<iostream>

using namespace std;

int findMin(int arr[],int low,int high)
{
	if(high < low)
		return arr[0];

	if(high == low)
		return arr[low];

	int mid = (low+high)/2;

	if(mid<high && arr[mid+1] < arr[mid])
		return arr[mid+1];

	if(mid>low && arr[mid] < arr[mid-1])
		return arr[mid];

	if(arr[high] > arr[mid])
		return findMin(arr,low,mid-1);
	return findMin(arr,mid+1,high);
}

int main()
{
	int arr[] = {3,4,5,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<findMin(arr,0,n-1)<<"\n";
}
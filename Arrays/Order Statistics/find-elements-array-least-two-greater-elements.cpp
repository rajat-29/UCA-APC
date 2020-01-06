#include<iostream>
#include<algorithm>

using namespace std;

void greaterElements(int arr[],int n)
{
	sort(arr,arr+n);

	for(int i=0;i<n-2;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {2,-6,3,5,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	greaterElements(arr,n);
}
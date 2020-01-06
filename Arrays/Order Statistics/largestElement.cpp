#include<iostream>

using namespace std;

void largestElement(int arr[],int n)
{
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	cout<<max<<"\n";
}

int main()
{
	int arr[] = {10,324,45,9808,90};
	int n = sizeof(arr)/sizeof(arr[0]);

	largestElement(arr,n);
}
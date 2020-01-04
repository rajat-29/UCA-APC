#include<iostream>

using namespace std;

void segregate(int arr[],int n)
{
	int i=-1,j=0;
	while(j!=n)
	{
		if(arr[j]%2==0)
		{
			i++;
			swap(arr[i],arr[j]);
		}
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
	int arr[] = {1,3,2,4,7,6,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	segregate(arr,n);
	printArray(arr,n);
}
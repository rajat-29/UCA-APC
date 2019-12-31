#include<iostream>

using namespace std;

void leftRotate(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
	{
		int temp = arr[0];
		for(int j=0;j<n-1;j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = temp;
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int n = sizeof(a)/sizeof(a[0]);

	leftRotate(a,n,2);
	printArray(a,n);
}
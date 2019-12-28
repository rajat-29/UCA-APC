#include<iostream>

using namespace std;

int calGcd(int a,int b)
{
	if(b == 0)
		return a;
	else
		calGcd(b,a%b);
}

void leftRotate(int arr[],int n,int d)
{
	int gcd = calGcd(d,n);
	for(int i=0;i<gcd;i++)
	{
		int temp = arr[i];
		int j = i;
		while(1)
		{
			int k = j+d;

			if(k>=n)
				k = k-n;

			if(k == i)
				break;

			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
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
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int n = sizeof(arr)/sizeof(arr[0]);

	leftRotate(arr,n,3);
	printArray(arr,n);
}
#include<iostream>

using namespace std;

void largestElement(int arr[],int n)
{
	int first,second,third;
	first = second = third = -1;

	for(int i=0;i<n;i++)
	{
		if(arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second)
		{
			third = second;
			second = arr[i];
		}
		else if(arr[i] > third)
		{
			third = arr[i];
		}
	}
	cout<<first<<"\n";
	cout<<second<<"\n";
	cout<<third<<"\n";
}

int main()
{
	int arr[] = {10,4,3,50,23,90};
	int n = sizeof(arr)/sizeof(arr[0]);

	largestElement(arr,n);
}
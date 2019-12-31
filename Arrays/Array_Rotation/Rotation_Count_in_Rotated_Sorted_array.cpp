#include<iostream>

using namespace std;

void findRotationCount(int arr[],int n)
{
	int min = arr[0];
	int index = 0;
	for(int i=1;i<n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	cout<<index<<"\n";
}

int main()
{
	int arr[] = {7,9,11,12,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	findRotationCount(arr,n);
}
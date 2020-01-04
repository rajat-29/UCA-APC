#include<bits/stdc++.h>  
#include <stdlib.h>  
#include <time.h> 

using namespace std;

void shuffle(int arr[],int n)
{
	srand(time(NULL));

	for(int i=n-1;i>0;i--)
	{
		int j = rand()%(i+1);
		swap(arr[i],arr[j]);
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
	int arr[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	shuffle(arr,n);
	printArray(arr,n);
}
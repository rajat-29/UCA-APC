#include<iostream>

using namespace std;

void reOrder(int arr[],int n,int index[])
{
	int temp[n];

	for(int i=0;i<n;i++)
	{
		temp[index[i]] = arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i] = temp[i];
		index[i] = i;
	}
}

void printArray(int arr[],int n,int index[])
{
	cout << "Reordered array is: \n"; 
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";

	cout << "Modified Index array is: \n"; 
    for (int i=0; i<n; i++) 
        cout << index[i] << " "; 
}

int main()
{
	int arr[] = {50,40,70,60,90};
	int n = sizeof(arr)/sizeof(arr[0]);

	int index[] = {3,0,4,1,2};

	reOrder(arr,n,index);
	printArray(arr,n,index);
}
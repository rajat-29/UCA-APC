#include<iostream>
#include<algorithm>

using namespace std;

void findElement(int arr[],int n,int k)
{
	sort(arr,arr+n);
	cout<<arr[k-1]<<"\n";
}

int main()
{
	int arr[] = {7,10,4,3,20,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	findElement(arr,n,k);
}
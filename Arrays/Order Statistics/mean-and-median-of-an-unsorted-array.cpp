#include<iostream>
#include<algorithm>

using namespace std;

void mean(int arr[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
		sum += arr[i];

	double res = (double)sum/(double)n;
	cout<<"Mean is : "<<res<<"\n";
}

void median(int arr[],int n)
{
	sort(arr,arr+n);

	double res;

	if(n%2 != 0)
		res = (double)arr[n/2];

	res = (double)(arr[(n-1)/2] + arr[n/2])/2.0;
	cout<<"Median is : "<<res<<"\n";
}

int main()
{
	int arr[] = {1,3,4,2,7,5,8,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	mean(arr,n);
	median(arr,n);
}
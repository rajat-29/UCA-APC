#include<iostream>
#include<algorithm>

using namespace std;

void calProduct(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int res = 1;
	for(int i=0;i<k;i++)
	{
		res = res*arr[i];
	}
	cout<<res<<"\n";
}

int main()
{
	int arr[] = {198,76,544,123,154,675};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	calProduct(arr,n,k);
}
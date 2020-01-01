#include<bits/stdc++.h> 

using namespace std;

void reArrange(int arr[],int n)
{
	int ans[n];
	int p=0,q=n-1;
	sort(arr,arr+n);

	for(int i=0;i<n;i++)
	{
		if((i+1)%2==0)
		{
			ans[i] = arr[q--];
		}
		else
		{
			ans[i] = arr[p++];
		}
	}

	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
}

int main()
{
	int arr[] = {1,3,2,2,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	reArrange(arr,n);
}
#include <bits/stdc++.h> 

using namespace std;

void findElement(int arr[],int n,int k)
{
	set<int> s;
	for(int i=0;i<n;i++)
		s.insert(arr[i]);

	auto it = s.begin();
	for(int i=0;i<k-1;i++)
		it++;

	cout<<*it<<"\n";
}

int main()
{
	int arr[] = {7,10,4,3,20,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	findElement(arr,n,k);
}
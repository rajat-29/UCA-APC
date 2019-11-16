#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sortAnArray(int a[],int n)
{
	vector<int> v;
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
			v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
			a[i] = v[j++];
	}

}

int main()
{
	int a[] = {2,-6,-3,8,4,1};

	int n1 = sizeof(a) / sizeof(a[0]);

	sortAnArray(a,n1);

	for(int i=0;i<n1;i++)
		cout<<a[i]<<" ";
}
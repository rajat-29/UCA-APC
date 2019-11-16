#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sortAnArray(int a[],int b[],int m,int n)
{
	vector<int> v;
	int l = b[0];
	int r = b[1];
	int k = b[2];

	for(int i=l-1;i<r;i++)
		v.push_back(a[i]);

	sort(v.begin(),v.end());

	cout<<v[k-1];
}

int main()
{
	int a[] = {3,2,5,4,7,1,9};
	int b[] = {2,6,3};

	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	sortAnArray(a,b,n1,n2);
}
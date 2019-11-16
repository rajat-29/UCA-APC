#include<iostream>
#include<algorithm>
using namespace std;

void findMinDiff(int a[],int n)
{
	int diff = abs(a[0] - a[1]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int b = abs(a[i] - a[j]);
			if(diff > b)
				diff = b;
		}
	}
	cout<<diff;
}

int main()
{
	int a[] = {10, 2, 6, 4};

	int n1 = sizeof(a) / sizeof(a[0]);

	findMinDiff(a,n1);
}
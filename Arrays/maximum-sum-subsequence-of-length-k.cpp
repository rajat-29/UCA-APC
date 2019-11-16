#include<iostream>
#include<algorithm>
using namespace std;

void maxSum(int a[],int n,int k)
{
	sort(a,a+n);
	int s = n-k,sum=0;
	for(int i=s;i<n;i++)
		sum += a[i];

	cout<<sum;
}

int main()
{
	int a[] = {8, 5, 9, 10, 5, 6, 21, 8};
	int k = 3;

	int n1 = sizeof(a) / sizeof(a[0]);

	maxSum(a,n1,k);

}
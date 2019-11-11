#include<iostream>
using namespace std;

int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}

void findMaximumSumPath(int a[],int b[],int n1,int n2)
{
	int i=0,j=0;
	int sum1=0,sum2=0,result=0;

	while(i<n1 && j<n2)
	{
		if(a[i] < b[j])
		{
			sum1 += a[i++];
		}
		if(a[i] > b[j])
		{
			sum2 += b[j++];
		}
		if(a[i] == b[j])
		{
			result += max(sum1,sum2);
			sum1 = 0;
			sum2 = 0;
			result += a[i];
			i++;
			j++;
		}
	}
	while(i<n1)
		sum1 += a[i++];
	while(j<n2)
		sum2 += b[j++];

	result += max(sum1,sum2);

	cout<<result<<"\n";
}

int main()
{
	int a[] = {2,3,7,10,12};
	int b[] = {1,5,7,8};

	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	findMaximumSumPath(a,b,n1,n1);
}
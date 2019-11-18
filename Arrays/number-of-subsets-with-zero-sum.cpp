#include<iostream>
#include<math.h>
using namespace std;

void subsetWithZeroSum(int a[],int n)
{
	int count = pow(2,n);
	int sum=0,c=0;
	for(int i=0;i<count;i++)
	{
		sum = 0;
		for(int j=0;j<n;j++)
		{
			if((i & (1<<j)) > 0)
				sum += a[j];
		}
		if(sum == 0)
			c++;
	}
	cout<<"count : "<<c;
}

int main()
{
	int a[] = {1,1,1};

	int n1 = sizeof(a) / sizeof(a[0]);

	subsetWithZeroSum(a,n1);
}
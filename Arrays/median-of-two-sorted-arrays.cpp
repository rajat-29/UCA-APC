#include<iostream>
#include<algorithm>
using namespace std;

void getMedian(int c[],int n)
{
	if(n%2 == 0)
	{
		int sum = (c[n/2] + c[n/2-1])/2;
		cout<<"Median : "<<sum<<"\n";
	}
	else
	{
		cout<<"Median : "<<c[n/2]<<"\n";
	}
}

int main()
{
	int a1[] = {1,12,15,26,38};
	int a2[] = {2,13,17,30,45};
	int n1 = sizeof(a1) / sizeof(a1[0]);
	int n2 = sizeof(a2) / sizeof(a2[0]);
	int i,j,k=0;
	if(n1 == n2)
	{
		int n = n1+n2;
		int c[n];
		for(i=0;i<n1;i++)
			c[i] = a1[i];
		for(j=0;j<n2;j++)
			c[i++] = a2[j];

		sort(c,c+n);
		getMedian(c,n);
	}
	else
	{
		cout<<"Arrays are not of equal size";
	}

	
}
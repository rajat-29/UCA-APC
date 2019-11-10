#include<iostream>
#include<algorithm>
using namespace std;

#define n 4 

void findMerge(int a[][n],int k)
{
	int c[n*k];
	int z=0;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[z++] = a[i][j];
		}
	}

	sort(c,c+n*k);

	for (int i=0; i<n*k;i++)
		cout<<c[i]<<" ";
}

int main()
{
	int a[][n] = {{2,6,12,34},{1,9,20,1000},{23,34,90,2000}};
	int k = sizeof(a) / sizeof(a[0]);

	findMerge(a,k);
}
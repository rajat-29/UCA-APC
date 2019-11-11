#include <iostream>
#include <cstdlib>
using namespace std;

void findPairs(int a[],int b[],int x,int n1,int n2)
{
	int diff,y,z,sum;
	diff = abs(x - (a[0]+b[0]));

	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			sum = abs(x - (a[i]+b[j]));
			if(sum < diff)
			{
				diff = sum;
				y = a[i];
				z = b[j];
			}
		}
	}
	cout<<y<<" "<<z;
}

int main()
{
	int a[] = {1,4,5,7};
	int b[] = {10,20,30,40};
	int x = 32;

	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	findPairs(a,b,x,n1,n2);

}
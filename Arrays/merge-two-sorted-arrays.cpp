#include<iostream>
#include<algorithm>
using namespace std;

void mergeTwoArrays(int a[],int b[],int m,int n)
{
	int c[m+n];
	int i,j;
	for(i=0;i<m;i++)
		c[i] = a[i];
	for(j=0;j<n;j++)
		c[i++] = b[j];
	sort(c,c+(m+n));

	for(i=0;i<m;i++)
		a[i] = c[i];
	for(j=0;j<n;j++)
		b[j] = c[i++];

}

int main()
{
	int a[] = {1, 5, 9, 10, 15, 20};
	int b[] = {2, 3, 8, 13};

	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	mergeTwoArrays(a,b,n1,n2);

	for(int i=0;i<n1;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	for(int i=0;i<n2;i++)
		cout<<b[i]<<" ";
}
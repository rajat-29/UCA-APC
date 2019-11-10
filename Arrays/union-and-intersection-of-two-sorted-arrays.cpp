#include<iostream>
#include<algorithm>
using namespace std;

void findUnion(int a[],int b[],int n1,int n2)
{
	int i=0,j=0;
	while(i<n1 && j<n2)
	{
		if(a[i] < b[j])
		{
			cout<<a[i] <<" ";
			i++;
		}
		if(a[i] > b[j])
		{
			cout<<b[j]<<" ";
			j++;
		}
		if(a[i] == b[j])
		{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n1)
		cout<<a[i++]<<" ";
	while(j<n2)
		cout<<b[j++]<<" ";
}

void findIntersection(int a[],int b[],int n1,int n2)
{
	int i=0,j=0;
	while(i<n1 && j<n2)
	{
		if(a[i] < b[j])
			i++;
		if(a[i] > b[j])
			j++;
		if(a[i] == b[j])
		{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}

int main()
{
	int a[] = {1,3,4,5,7};
	int b[] = {2,3,5,6};
	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	cout<<"Union : ";
	findUnion(a,b,n1,n2);
	cout<<"\n";

	cout<<"Intersection : ";
	findIntersection(a,b,n1,n2);
	cout<<"\n";

}
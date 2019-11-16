#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void split(int sum,vector<int> &x)
{
	vector<int> obj;
	while(sum)
	{
		obj.push_back(sum%10);
		sum = sum/10;
	}
	reverse(obj.begin(),obj.end());
	for(int s : obj)
		x.push_back(s);
}

void addElement(int a[],int b[],int m,int n)
{
	int i=0,j=0,sum;
	vector<int> x;
	while(i<m && j<n)
	{
		sum = a[i] + b[j];
		if(sum<10)
			x.push_back(sum);
		else
			split(sum,x);
		i++;
		j++;

	}
	while(i<m)
		split(a[i++],x);
	while(j<n)
		split(b[j++],x);

	for(int z : x)
		cout<<z<<" ";
		
}

int main()
{
	int a[] = {9343, 2, 3, 7, 9, 6};
	int b[] = {34, 11, 4, 7, 8, 7, 6, 99};

	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);

	addElement(a,b,n1,n2);

}
#include<iostream>
#include<set>
using namespace std;

void removeDuplicate(int a[],int n)
{
	set<int> s;
	for(int i=0;i<n;i++)
		s.insert(a[i]);

	set<int>::iterator i;
	for(i=s.begin();i!=s.end();i++)
		cout<<*i<<" ";
}

int main()
{
	int a[] = {4,2,3,3,2,4};

	int n1 = sizeof(a) / sizeof(a[0]);

	removeDuplicate(a,n1);
}
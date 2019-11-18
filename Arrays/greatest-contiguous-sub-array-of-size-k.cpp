#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

void greatestSubArray(int a[],int n,int k)
{
	vector<vector<int> > v;

	int count = pow(2,n);
	for(int i=0;i<count;i++)
	{
		vector<int> temp;
		for(int j=0;j<n;j++)
		{
			if((i & (1<<j)) > 0)
				temp.push_back(a[j]);
		}
		if(temp.size() == k)
			v.push_back(temp);
	}
	sort(v.begin(),v.end());	

	for(auto x : v[v.size() - 1])
		cout<<x<<" ";
	

}

int main()
{
	int a[] = {1,4,3,2,5};

	int n1 = sizeof(a) / sizeof(a[0]);
	int k = 4;

	greatestSubArray(a,n1,k);
}
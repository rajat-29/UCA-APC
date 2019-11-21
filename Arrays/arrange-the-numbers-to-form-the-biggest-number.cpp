#include<iostream>
#include<algorithm>
#include<vector>
#include <string> 
using namespace std;

int compareNo(string x,string y)
{
	string a = x.append(y);
	string b = y.append(x);

	return a.compare(b) > 0 ? 1 : 0;
}

void formNumber(vector<string> v)
{

	sort(v.begin(),v.end(),compareNo);

	for(int i=0;i<v.size();i++)
		cout<<v[i];
}

int main()
{
	vector<string> v;
	v.push_back("54");
	v.push_back("546");
	v.push_back("548");
	v.push_back("60");

	formNumber(v);
}
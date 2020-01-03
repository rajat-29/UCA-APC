#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 

using namespace std;

int myComp(string x,string y)
{
	string xy = x.append(y);
	string yx = y.append(x);

	return xy.compare(yx) > 0 ? 1 : 0;

}

void formLargest(vector<string> arr)
{
	sort(arr.begin(),arr.end(),myComp);
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i];
	}
	cout<<"\n";
}

int main()
{
	vector<string> arr;
	arr.push_back("54"); 
    arr.push_back("546"); 
    arr.push_back("548"); 
    arr.push_back("60");

    formLargest(arr);
}
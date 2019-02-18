// code to find no of character in a string usng array!!

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int a[256]={0};
	string str;
	cout<<"ENTER A STRING = ";
	cin>>str;
	for(int i=0;i<str.length();i++)
		a[(int)str[i]]++;

	for(int i=0;i<256;i++)
		cout<<(char)i<<" "<<a[i]<<endl;
	return 0;
}

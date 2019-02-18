// code to reverse a no using recursion!!

#include<iostream>
using namespace std;

int revers(int n,int rev)
{
	int k;
	static int d=1;
	if(n>10)
	{
		k=n%10;
		rev=revers(n/10,rev);
		d=d*10;
		rev=k*d+rev;
		return rev;
	}
	else
	{
		return n*d;
	}
}

int main()
{
	int n;
	cout<<"ENTER A NO = ";
	cin>>n;
	cout<<revers(n,0);
}

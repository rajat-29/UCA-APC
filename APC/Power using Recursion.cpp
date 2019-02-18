
#include<iostream>
using namespace std;
int powertable(int x,int y)
{
	if(y==0)
	return 1;
	if(x==0 || y==1)
	return x;
	int result;
	if(y%2==0)
	{
		result=powertable(x,y/2);
		result=result*result;
	}
	else
	{
		y=y-1;
		result=powertable(x,y/2);
		result=result*result;
		result=result*x;
	}
	return result;	
}
int main()
{
	int no,base;
	cout<<"ENTER A NUMBER = ";
	cin>>no;
	cout<<"ENTER BASE = ";
	cin>>base;
    cout<<"RESULT IS = "<<powertable(no,base);
}

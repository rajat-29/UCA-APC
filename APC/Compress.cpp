// code used to compress a string and printing how many times that char has been occured!!

#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str="aaaabbbccc",str1;
	int i=0,j=0,count=0;
	bool samechar=true;
	while(str[i]!='\0') {
		if(samechar==true) {
		count++;
			if(str[i]!=str[i+1])
			samechar=false;
		}
		else {
		str1.push_back(str[i-1]);
		str1.push_back(char(count + '0'));
		count=0;
		samechar=true;	
		i--;
		}
	 i++;
	}
		str1.push_back(str[i-1]);
		str1.push_back(char(count + '0'));
cout<<str1;
}

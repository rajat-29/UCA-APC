// code for shorting the string no matter how long a string is!!

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str="Sachin Ramesh Tendulkar";
	char cc=str[0];
	bool flag=true;
	int i=0,j=0,index;
	while(str[i]!='\0')
	{
		if(str[i]==' ') 
		{
			if(flag==true)
			{
			flag=false;
			}
		}
		else
		{
			if(flag==false)
			{
			flag=true;
			index=i;
			str[j++]=cc;
			str[j++]='.';
			cc=str[i];
			}
		}
	i++;
	}
while(str[index]!='\0')
{
str[j++]=str[index++];
}
str[j++]='\0';
str.resize(j);
cout<<str;
return 0;
}

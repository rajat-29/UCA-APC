#include<stdio.h>
void rev(char s[],int i,int j)
{
	static int c;
	if(s[j]=='\0')
	{
		c=i;
	}
	else if(s[j+1]=='\0')
	{
		c=i+1;
	}
	else
	{
		char ch;
		rev(s,i+1,j+2);
		ch=s[i];
		s[i]=s[c];
		s[c]=ch;
		c++;
	}
}
int main()
{
	char str[100];
	printf("ENTER A STRING TO REVERSE = ");
	scanf("%[^\n]s",str);
	rev(str,0,0);
	puts(str);
}

// code to compare two strings

#include<stdio.h>
#include<string.h>
void remove_spaces(char s[])
{
	int i=0,j=0,flag=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(flag==1)
			{
				s[j]=s[i+1];
			}
			flag=0;
		}
		else
		{
			flag=1;
			s[j++]=s[i];
		}
		i++;
	}
	s[j]='\0';
}
int  compare(char a[],char b[])
{
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0')
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
		i++;
	}
	if(a[i]=='\0'&&b[i]=='\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	char str1[100],str2[100];
	printf("ENTER FIRST STRING = ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("ENTER SECOND STRING = ");
	scanf("%[^\n]s",str2);
	remove_spaces(str1);
	remove_spaces(str2);
	int check=compare(str1,str2);
	if(check)
	{
		printf("EQUAL");
	}
	else
	{
		printf("NOT EQUAL");
	}
}

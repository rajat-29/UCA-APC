// code to remove spaces in a string without using another string!!

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
int main()
{
	char str[50];
	printf("ENTER A STRING = ");
	scanf("%[^\n]s",str);
	remove_spaces(str);
	puts(str);
}

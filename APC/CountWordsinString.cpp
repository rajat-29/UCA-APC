#include<stdio.h>
int counting_word(char str[])
{
	int flag=0,i,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			flag=0;
		}
		else
		{
			if(flag==0)
			{
				count++;
				flag=1;
			}
		}
		i++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("ENTER A STRING TO CHECK = ");
	scanf("%[^\n]s",str);
	printf("%d",counting_word(str));
}

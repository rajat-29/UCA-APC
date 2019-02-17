#include<iostream>
#include<string.h>

using namespace std;

struct Word {
    int count;
    char str1[50];
    struct Word *next;
} *WordPtr;

struct Hash {
    struct Word *head;
}h[256], *HashPtr;



void countWord(char str[])
{
    bool flag = false;
    WordPtr = h[(int)str[0]].head;
    while(WordPtr != 0) 
	{
        if(strcmp(WordPtr->str1,str) == 0) 
		{
            flag = true;
            WordPtr->count++;
            break;
        }
        WordPtr = WordPtr->next;
    }
    if(flag == false) 
	{
        WordPtr = new Word;
        WordPtr->next = 0;
        h[(int)str[0]].head->next = WordPtr;
    }
}

char* Word(char str[],int j,int i)
{
	char *s=new char[i-j+1];
	for(int k=0;k<i-j;k++)
	{
		s[k]=str[k+j];
	}
	s[i-j]='\0';
	return s;
}

void stringsplit(char str[])
{
	bool flag=false;
	int i=0,j=0;
	while(true)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			if(flag==true)
			{
				flag=false;
				char *s=new char[i-j+1];
				s=Word(str,j,i);
				  if(h[(int)s[0]].head == 0)
                forminglist(s);
                countWord(s);
			
			}
			if(str[i]=='\0')
				return;		
		}
		else
		{
			if(flag==false)
			{
				j=i;
				flag=true;
			}
		}
		i++;
	}
}

void forminglist(char str[])
{
    h[(int)str[0]].head = new Word;
    h[(int)str[0]].head->count = 0;
    h[(int)str[0]].head->next = 0;
    strcpy(h[(int)str[0]].head->str1, str);
}

void print()
{
    for(int i = 0;i<256;i++) 
	{
        if(h[i].head != 0 ) 
		{
            WordPtr = h[i].head;
            while(WordPtr != 0) 
			{
                cout<<"Word = "<<WordPtr->str1<<" , Count = "<<WordPtr->count<<endl;
                WordPtr = WordPtr->next;
            }
        }
    }
}

int main()
{
	char str[]="my name is rajat my name is gupta";
	stringsplit(str);
	print();
}

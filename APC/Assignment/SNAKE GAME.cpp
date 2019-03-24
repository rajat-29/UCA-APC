#include <fstream>
#include <iostream>
#include <math.h>
#include<windows.h>
#include <conio.h>
#include <vector>
using namespace std;
enum eDirection{ STOP = 0, RIGHT,LEFT,UP,DOWN};
eDirection dir;
int width=20;
int height=80;
class board;
bool gameover=false;
class food
{
public:
    int x,y;
    char value;
    food(board &b);
};
class snake
{
public:
    int x,y;
    char value;
    void setchar(char c,int x1,int y1)
    {
        x=x1;
        y=y1;
        value=c;
    }
};
class board
{
public:
    int x,y;
    char mat[20][80];
    board()
    {
        for(int i=0;i<20;i++)
        	for(int j=0;j<80;j++)
        		if(i==0 || j==0 || i==19 || j==79) 
        			mat[i][j]='*';
    }
    void input()
		{
			if(kbhit())
			{
				switch(getch())
				{
					case 'a':
						dir=LEFT;
						break;					
					case 'd':
						dir=RIGHT;
						break;				
					case 'w':
						dir=UP;
						break;					
					case 'z':
						dir=DOWN;
							break;
					case 'x':
						gameover=true;
						break; 
				}
			}
		}
    void movement(food &f,vector <class snake> &s)
		{
			int prevX = s[0].x;
			int prevY = s[0].y;
			int prev2X,prev2Y;
			for(int i=1;i<s.size();i++)
			{
				prev2X=s[i].x;
				prev2Y=s[i].y;
				s[i].x=prevX;
				s[i].y=prevY;
				prevX=prev2X;
				prevY=prev2Y;
			}
			switch(dir)
			{
				case LEFT:
					s[0].y--;
					break;
				case RIGHT:
					s[0].y++;
					break;
				case UP:
					s[0].x--;
					break;
				case DOWN:
					s[0].x++;
					break;
				default:
					break;
			}
			if(s[0].x>=width)
			s[0].x = 0;
			else if(s[0].x<0)
			s[0].x=width-1;
			if(s[0].y>=height)
			s[0].y = 0;
			else if(s[0].y<0)
			s[0].y=height-1;
			for(int i=1;i<s.size();i++)
			{
				if(s[i].x==x && s[i].y==y)
				gameover=true;
			}
			if(s[0].x==f.x && s[0].y==f.y)
			{
				f.x=rand()%width;
				f.y=rand()%height;
				start:
				bool go=true;
				for(int i=0;i<s.size();i++)
				{
					if(f.x==s[i].x && f.y==s[i].y)
					go=false;
				}
				if(go==false)
					goto start;
				if(f.y==0)
				f.y=f.y+1;
				(s.back()).value='#';
				s.push_back(s[1]);
				(s.back()).value='T';
			}
		}
    void display_matrix(vector <class snake> &s)
    {
        for(int i=0;i<20;i++)
        {
            for(int j=0;j<80;j++)
            {
            	if(s[i].x==i && s[j].y==j)
            	mat[i][j]='*';
            cout<<mat[i][j];
            }
            cout<<endl;
        }
    }
    void display(vector <class snake> &s,food f)
    {
           system("CLS");
           for(int i=1;i<width-1;i++)
			{
				for(int j=1;j<height-1;j++)
				mat[i][j]=' ';
			}

			mat[f.x][f.y]=f.value;

			for(int i=0;i<s.size();i++)
			{
                mat[s[i].x][s[i].y]=s[i].value;
			}
    }
};
 food::food(board &b)
    {
        x=rand()%width;
        y=rand()%height;
        value='F';
        b.mat[x][y]=value;
    }
int main()
{
    class board b;
    char a;
    vector <class snake> s(4);	
    s[0].setchar('H',15,20);
    s[1].setchar('#',15,21);
    s[2].setchar('#',15,22);
    s[3].setchar('T',15,23);

    class food f(b);

    while(true)
    {
    	b.input();
        b.display(s,f);
        b.display_matrix(s);
        
        b.movement(f,s);
        Sleep(100);
        if(gameover==true)
        break;
    }
    
	
    return 0;
}

#include<iostream>
using namespace std;

void check(int a[3][3],int row,int col,int sum,int comp)
{
if(col<0 || row>=3 || col>=3) {
	return;
}
else
{
	sum+=a[row][col];
	check(a,row+1,col-1,sum,25);
	check(a,row+1,col+1,sum,25);
	if(sum==comp) {
	cout<<"Hi"<<endl;	
	}
}

}

int main()
{
int a[3][3]={1,9,3,8,4,8,0,8,9};
int i=0,j=1;
check(a,i,j,0,25);
}


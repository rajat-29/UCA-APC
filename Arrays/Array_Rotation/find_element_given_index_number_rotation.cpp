#include<iostream>

using namespace std;

int findElement(int arr[],int ranges[][2],int rotations,int index)
{
	for(int i=rotations-1;i>=0;i--)
	{
		int left = ranges[i][0];
		int right = ranges[i][1];

		if(left<=index && right>=index)
		{
			if(left == index)
				index = right;
			else
				index--;
		}
	}
	return arr[index];
}

int main() 
{ 
    int arr[] = {1,2,3,4,5}; 
    int rotations = 2; 
    int ranges[rotations][2] = {{0,2},{0,3}}; 
    int index = 1; 
    cout <<findElement(arr,ranges,rotations,index); 
} 
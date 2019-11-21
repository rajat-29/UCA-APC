#include<iostream>
#include<algorithm>
using namespace std;

void rearrange(int a[],int n)
{
	int even = n/2;
	int odd = n - even;

	int temp[n];
	for(int i=0;i<n;i++)
		temp[i] = a[i];

	sort(temp,temp+n);

	int j = odd - 1;
	for(int i=0;i<n;i+=2)
	{
		a[i] = temp[j];
		j--;
	}

	j = odd;
	for(int i=1;i<n;i+=2)
	{
		a[i] = temp[j];
		j++;
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7}; 
  
    int n = sizeof(a)/sizeof(a[0]); 
    rearrange(a,n); 
  
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
}
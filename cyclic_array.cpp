#include<iostream>
using namespace std;

int cyclic_array(int a[], int n)
{
	int i = n;
	int temp = a[n];
//	a[n] =0;
	while(i!=0)
	{
		a[i] = a[i-1];
		i--;
	}
	a[0] = temp;
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
}
int main()
{
//	int n = 4;    // n should be one less than the size of the array.
	int arr[]= {1,2,3,4,5};
	cout<<cyclic_array(arr,4);
    return 0;
}


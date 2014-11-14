#include<iostream>

using namespace std;
void insertionsort(int a[],int n)
{
	int value;
	int hole;
	for(int i=1;i<=n-1;i++)
	{
		value=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
	}
}
int main()
{
	int a[]={1,6,3,4,5,2};
	insertionsort(a,6);
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
	return 0;
}

#include<iostream>

using namespace std;
void selectionsort(int a[],int n)
{
	int min;
	for(int i=0;i<=n-2;i++)
	{
		min=i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			{
			min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main()
{
	int a[]={1,6,3,4,5,2};
	selectionsort(a,6);
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
	return 0;
}

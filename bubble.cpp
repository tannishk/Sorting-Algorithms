#include<iostream>

using namespace std;
void bubblesort(int a[],int n)
{
	int temp;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{   flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
			break; // make complexity for best case o(n) 
	}
}
int main()
{
	int a[]={1,6,3,4,5,2};
	bubblesort(a,6);
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
	return 0;
}

#include<iostream>

using namespace std;
void merge(int a[],int left[],int right[],int n,int nl,int nr)
{
	int i=0,j=0,k=0;
	while(i<nl && j<nr)
	{
		if(left[i]<right[j])
		{
			a[k]=left[i];
			k++;
			i++;
		}
		else
		if(right[j]<left[i])
		{
			a[k]=right[j];
			k++;j++;
		}
	}
	while(i<nl)
	{
		a[k]=left[i];
		k++;
		i++;
	}

	while(j<nr)
	{
		a[k]=right[j];
		k++;
		j++;
	}
}
void mergesort(int a[],int n)
{
	if(n<2)
		return;
	int mid=n/2;
	int left[mid];
	int right[n-mid];
	int i=0;
	for(i=0;i<mid;i++)
	{
		left[i]=a[i];
	}
	int j=0;
	for(i=mid;i<n;i++)
	{
		right[j]=a[i];
		j++;
	}
	mergesort(left,mid);
	mergesort(right,n-mid);
	merge(a,left,right,n,mid,n-mid);
}

int main()
{
	int a[]={1,6,3,4,5,2};
	mergesort(a,6);
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
	return 0;
}

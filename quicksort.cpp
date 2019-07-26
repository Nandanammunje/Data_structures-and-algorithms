#include<iostream>
using namespace std;



void swap(int *a,int *b)
{
	int t;
	
	t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int low,int high)
{
	
	int pivot=a[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
		
		if(a[j]>=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
			
		}
		
		
	}
	
	swap(&a[i+1],&a[high]);
	
	
	
	return i+1;
}

void quicksort(int a[],int low,int high)
{
	
	if(low < high)
	{
		int i=partition(a,0,high);
		
		quicksort(a,low,i-1);
		quicksort(a,i+1,high);
		
	}
	
	
	
	
	
}


int main()
{
	int m;
	cout<<" enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n enter the data into the array ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,m-1);
	
	cout<<"\n the sorted array is ";
	for(int i=0;i<m;i++)
	cout<<a[i]<<"\n";
	
	
	return 0;
}

	
	
	


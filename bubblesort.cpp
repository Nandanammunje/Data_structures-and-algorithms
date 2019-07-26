#include<iostream>
using namespace std;
int main()
{
	
	int m,temp;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		
		
	}
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<m-1-i;j++)
		{
			if(a[j] >a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
		
	}
	cout<<"\n the sorted array ";
	for(int i=0;i<m;i++)
	{
		
		cout<<a[i]<<"  ";
		
	}
	
	
	return 0;
}

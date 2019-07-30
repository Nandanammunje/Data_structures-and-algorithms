#include<iostream>
using namespace std;
int main()
{
	int m,min;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
	{
		
		cin>>a[i];
		
		
		
	}
	
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(a[i] > a[j])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;
				
			}
			
		}
	}
	
	
	cout<<"\n enter the output of the array ";
	
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int m,temp,swap=1;
	cout<<"\n enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n enter the data into the array ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		
		
	}
	for(int i=0;i<m&&swap;i++)
	{
		swap=0;
		for(int j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			
			temp=a[j];
		     a[j]=a[j+1];
		     a[j+1]=temp;
		     swap=1;
		       }
		}
		
	}
	cout<<"\n the output array is ";
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<"  ";
		
	}
	
	
	
	
	
	return 0;
}

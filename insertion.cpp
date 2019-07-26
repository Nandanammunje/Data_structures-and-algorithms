#include<iostream>
using namespace std;
int main()
{
	int m,key,j;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into  the array ";
	for(int i=0;i<m;i++)
	{
		
		cin>>a[i];
		
	}
	
	for(int i=1;i<m;i++)
	{
		
		key=a[i];
		j=i-1;
		while(j>=0 &&key < a[j])
        {
        	a[j+1]=a[j];
        	j--;
			}
			a[j+1]=key;			
		
	}
	
	cout<<"\n sorted output is ";
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}

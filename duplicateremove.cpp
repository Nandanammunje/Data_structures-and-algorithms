#include<iostream>
using namespace std;


void removedup(int a[],int m)
{
	for(int i=0;i<m-1;i++)
	{
		
		for(int j=i+1;j<m;j++)
		{
			if(a[i]==a[j])
			{
				cout<<"duplicate exist ";
				return;
			}
		}
		
	}
	cout<<"no duplicates ";
	
	
	
}
int main()
{
	
	int m;
	cout<<"\n Enter the size of the  array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
	cin>>a[i];
	removedup(a,m);
	
	
	
	
	
	
	
	return 0;
}


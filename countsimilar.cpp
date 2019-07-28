#include<iostream>
using namespace std;
int main()
{
	
	int m,key,j,counter=0,nextcounter=0,data=-1;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
	cin>>a[i];
	for(int i=1;i<m;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key < a[j])
		{
			a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=key;
		
		
	}
	
	for(int i=0;i<m-1;i++)
	{
		if(a[i]==a[i+1])
		{
			counter++;
		}      
		else if(counter > nextcounter)
		{
			nextcounter=counter;
			data=a[i];
			counter=0;
		}
		
		}
		if(data==-1)
		cout<<"\n elements are unique ";
		else
		cout<<"\n most repeated no is "<<data;
	
	
	
	return 0;
}

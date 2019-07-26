#include<iostream>
using namespace std;





void removedup(int a[],int m)
{
for (int i=0;i<m-1;i++)
{
	if(a[i]==a[i+1])
	{
		
		cout<<"\n Duplicates do exist ";
		return;
	}
	
	
}
	
	cout<<"\n Duplicates do not exist ";
	
}

int main()
{
	
	int m,key,j;
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
  		while(j >0 && a[j] > key)
  		{
  			a[j+1]=a[j];
  			j--;
		  }
  	   a[j+1]=key;
  		
  		
	  }
	for(int i=0;i<m;i++)
	cout<<a[i]<<" ";
     removedup(a,m);
	
	
	
	return 0;
	
	
	
	
	
}

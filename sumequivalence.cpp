#include<iostream>
using namespace std;
int main()
{
	int m,n,key,j,sum;
	cout<<"\n Enter the size of the first array ";
	cin>>m;
	cout<<"\n Enter the size of the second array  ";
	cin>>n;
	int a[m],b[n];
	cout<<"\n Enter the data into the first array  ";
	for(int i=0;i<m;i++)
     cin>>a[i];
	cout<<"\n Enter the data into the second array  ";
	for(int i=0;i<n;i++)
	cin>>b[i];
	cout<<"\n Enter the sum value ";
	cin>>sum;
	for(int i=0;i<m;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=key;
		
		
		
		
	}
	
	for(int i=1;i<n;i++)
  {
  	key=b[i];
  	j=i-1;
  	while(j >=0 && b[j]> key)
  	{
  		b[j+1]=b[j];
  		j--;
	  }
  	
  	b[j+1]=key;
  	
  	
  }
	
    int i=0,counter=0,final=n;
	while(i<m)
	{
		j=0;
	 while(j<=final)
	 {
	 	
	 	if(a[i]+b[j]==sum)
	 	{
	 	    final=j;
	 	    counter++;
	 	
			 	
		 }
	 	else if(a[i]+b[j] > sum)
	 	{
	 	     final=j;
			  break;	
		 }
	 	  j++;
		 }
		 i++;	
	     j=0;
		if(final==0)
		{
			break;
		}
	}
	cout<<"\n no of pairs "<<counter;
	
	return 0;
}

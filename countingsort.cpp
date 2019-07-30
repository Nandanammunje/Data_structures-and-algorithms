#include<iostream>
using namespace std;

int main()
{
	int m;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
     cin>>a[i];
    
   int count[10];
   int sorted[m];
   for(int i=0;i<10;i++)
   {
   	
   	 count[i]=0;
	 }
	 for(int i=0;i<m;i++)
	 count[a[i]]++;
	 
	 for(int i=1;i<10;i++) 
	  count[i]=count[i]+count[i-1];
	  
	   
	   
	  for(int i=0;i<m;i++)
	  {
	  	sorted[count[a[i]]-1]=a[i];
	  	count[a[i]]--;
	  	
	  	
	  	
	  }
	  cout<<"\n sorted array is ";
    for(int i=0;i<m;i++)
    cout<<sorted[i]<<" ";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

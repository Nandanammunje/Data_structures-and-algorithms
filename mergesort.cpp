#include<iostream>
using namespace std;


  void mergesort(int a[],int l,int m,int r)
  {
  	int i,j,k;
  	int n1=m-l+1;
  	int n2=r-m;
  	int right[n1],left[n2];
  	
for(i=0;i<n1;i++)
right[i]=a[l+i];
for(j=0;j<n2;j++)
left[j]=a[m+1+j];
i=0;
j=0;
k=l;
while(i <n1 && j<n2)
{
	
	if(right[i]<=left[j])
	{
		
		a[k]=right[i];
		i++;
		
	}
	else
	{
		a[k]=left[j];
		j++;
	}
	
	k++;
}
  	
 while(i <n1)
 {
 
 a[k]=right[i]; 	
  	i++;
  	k++;
  	
  }
while(j <n2)
{
  a[k]=left[j];
  j++;
  k++;	
}
}
void merge(int a[],int l,int r)
{
	
	if(l < r)
	{
		int m=l+(r-l)/2;
		
		merge(a,l,m);
		merge(a,m+1,r);
		mergesort(a,l,m,r);
		
	}
}

int main()
{
	int size;
	
	cout<<"\n Enter the size of the array ";
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		
		cin>>a[i];
		
	}
	merge(a,0,size-1);
	cout<<"\n Sorted Array is ";
	for(int i=0;i<size;i++)
	{
		
		cout<<a[i]<<"  ";
	}
	
	return 0;
	
}

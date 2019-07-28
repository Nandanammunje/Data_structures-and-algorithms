	#include<iostream>
using namespace std;
int main()
{
	
int m,temp,j;

cout<<"Enter no of elements ";
cin>>m;
int a[m];
cout<<"\n Enter data into the array ";

for(int i=0;i<m;i++)
{
	cin>>a[i];
	
}	
for(int gap=m/2;gap >0;gap=gap/2)
{
	
	for(int i=gap;i<m;i++)
	{
		temp=a[i];
		
		for(j=i;j>=gap&&temp<a[j-gap];j=j-gap)
		a[j]=a[j-gap];
		a[j]=temp;
		
	}
}	
	cout<<"\n the sorted output of the array ";
	for(int i=0;i<m;i++)
	cout<<a[i]<<"  ";
	
	
	



	return 0;
}

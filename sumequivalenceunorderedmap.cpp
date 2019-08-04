
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	
int m,n,sum,counter=0;
unordered_map<int, int> unmap;

cout<<"\n Enter the size of the first array ";
cin>>m;
int a[m];
cout<<"\n Enter data into the first array ";

for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the size of the second array ";
cin>>n;
int b[n];
cout<<"\n Enter the data into the second array ";

for(int i=0;i<n;i++)
cin>>b[i];
cout<<"\n Enter the sum value ";
cin>>sum;
for(int i=0;i<m;i++)
unmap[a[i]]=i;
for(int i=0;i<n;i++)
{
	
	if(unmap.find(sum-b[i])!=unmap.end())
	{
		
		counter++;
	}
}
	
cout<<"\n no of pairs "<<counter;	
	
	
	
	
	
	
	
	return 0;
}

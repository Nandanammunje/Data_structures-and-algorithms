#include<iostream>
using namespace std;

int findmedian(int a[],int b[],int low_a,int high_a,int low_b,int high_b,int m)
{
int mid_a=low_a+(high_a-low_a)/2;
int mid_b=low_b+(high_b-low_b)/2;
if(low_a==high_a-1)
{
    int max=(a[low_a]>b[low_b])?a[low_a]:b[low_b];
    int min=(a[high_a]<b[high_b])?a[high_a]:b[high_b];
    return (max+min)*0.5;
}
else if(a[mid_a] < b[mid_b])
{
    findmedian(a,b,mid_a,high_a,low_b,mid_b,m);
}
else
{
    findmedian(a,b,low_a,mid_a,mid_b,high_b,m);
}





}
int main()
{

int m;
cout<<"\n Enter the size of the arrays ";
cin>>m;
int a[m],b[m];
cout<<"\n Enter sorted data into the first array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter sorted data into second array ";
for(int i=0;i<m;i++)
cin>>b[i];
int median=findmedian(a,b,0,m-1,0,m-1,m);
cout<<"median of two sorted array is "<<median;
    return 0;
}
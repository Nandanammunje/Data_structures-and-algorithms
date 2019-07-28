#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int partition(int a[],int low,int high,int k);
int findmedian(int a[],int n)
{
    sort(a,a+n);
    return a[n/2];
}
int Kthsmallest(int a[],int low,int high,int k)
{

if(k > 0 && k<=high-low+1)
{
int n=high-low+1;
int i,median[(n+4)/5];
for(i=0;i<n/5;i++)
{
    median[i]=findmedian(a+low+i*5,5);
}
if(i*5<n)
{
median[i]=findmedian(a+low+i*5,n%5);
i++;
}

int med=(i==1)?median[0]:Kthsmallest(median,0,i-1,i/2);
int pos=partition(a,low,high,med);


if(k-low==pos-low)
{
    return a[pos];
}
if(pos-low > k-low)
{
    return Kthsmallest(a,low,pos-1,k);
}
else
{
    return Kthsmallest(a,pos+1,high,k);
}






}
}
void swap(int *a,int *b)
{

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high,int x)
{
int i=low-1,j;
for(j=low;j<=high-1;j++)
{
if(a[j]<=x)
{
    i++;
swap(&a[i],&a[j]);
}
}

swap(&a[i+1],&a[high]);
return i+1;
}
int main()
{
int m,rank;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the rank of the element ";
cin>>rank;
cout<<"\n Kth smallest no is"<<Kthsmallest(a,0,m-1,rank);
return 0;
}
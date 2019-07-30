#include<iostream>
using namespace std;

int bisearch(int a[],int low,int high,int data)
{
int mid=(low+high)/2;
if(a[mid]==data)
return 1;
if(low >=high)
return 0;
else if(a[mid] > data)
return bisearch(a,low,mid-1,data);
else if(a[mid]< data )
return bisearch(a,mid+1,high,data);
else
return 0;

}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high)
{
int i=low-1;
int pivot=a[high];

for(int j=low;j<=high-1;j++)
{
  if(a[j]<=pivot)
  {
      i++;
      swap(&a[i],&a[j]);
  }

}
swap(&a[i+1],&a[high]);
return i+1;

}
void quicksort(int a[],int low,int high)
{
if(low < high)
{
int pi=partition(a,low,high);
quicksort(a,low,pi-1);
quicksort(a,pi+1,high);
}


}
int main()
{
int m,data;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
quicksort(a,0,m-1);
cout<<"\n Enter the data to search ";
cin>>data;
if(bisearch(a,0,m-1,data))
cout<<"\n no is present ";
else
cout<<"\n no is not preent ";









    return 0;
}
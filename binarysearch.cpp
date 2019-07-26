#include<iostream>
using namespace std;
void swap(int *a,int *b)
{

int temp;
temp=*a;
*a=*b;
*b=temp;


}
int partition(int a[],int low,int high)
{
int pivot=a[high];
int i=low-1;
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
int bisearch(int a[],int low,int high,int data)
{
int mid;
while (low <=high)
{
  mid=(low+high)/2;
  if(a[mid]==data)
  return mid;
  else if(data > a[mid])
     low=mid+1;
     else
     {
       high=mid-1;
     }
     
}
return -1;

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
cout<<"\n Enter the element to search ";
cin>>data;
int high=m-1;
int low=0;
int mid;



cout<<bisearch(a,low,high,data);






    return 0;

}
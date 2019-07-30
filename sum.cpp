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
int m,sum,i=0,j,found=0;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
quicksort(a,0,m-1);
cout<<"\n Enter the sum value ";
cin>>sum;
j=m-1;
while(i<j)
{
if(a[i]+a[j]==sum)
{
    found=1;
    cout<<"\n the numbers are "<<a[i]<<"  "<<a[j];
    break;
}
else if(a[i]+a[j] > sum)
      j--;
      else
      {
          i++;
      }
      

}
if(!found)
cout<<"\n numbers do not exists ";




    return 0;
}
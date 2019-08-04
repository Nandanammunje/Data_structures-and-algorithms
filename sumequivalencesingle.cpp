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
int main()
{
int m,data,find=0;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter sum value ";
cin>>data;
quicksort(a,0,m-1);
for(int i=0,j=m-1;i<j;)
{
    if(a[i]+a[j]==data)
    {
        find=1;
        cout<<"\n the numbers are  "<<a[i]<< " and "<<a[j];
        break;

    }
    else if(a[i]+a[j] > data)
    {
        j--;
    }
    else
    {
        i++;
    }
    

}
if(!find)
cout<<"\n numbers do not exist in the array ";







    return 0;
}
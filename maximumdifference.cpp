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
int i=low-1,j,pivot=a[high];
for( j=low;j<=high-1;j++)
{
if(a[j] < pivot)
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
        int i=partition(a,low,high);
        quicksort(a,low,i-1);
        quicksort(a,i+1,high);

    }
}
int maximdiff(int a[],int m)
{
   int low=0,high=m-1;

}
/ 
{
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];






    return 0;
}

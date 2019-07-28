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
int pivot=a[high],i=low-1,j=low;
for( j=low;j<=high-1;j++)
{
if(a[j] <=pivot)
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
if(low <high)
{
int i=partition(a,low,high);
quicksort(a,low,i-1);
quicksort(a,i+1,high);

}

}
int binarysearch(int a[],int low,int high,int data)
{
    int mid=low+(high-low)/2;
if (low <=high)
{
if(a[mid]==data)

    return mid;
else if(a[mid] > data)

    binarysearch(a,low,mid-1,data);
else

    binarysearch(a,mid+1,high,data);

}
return -1;
}
int main()
{
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into  the  array ";
for(int i=0;i<m;i++)
cin>>a[i];








return -1;
}
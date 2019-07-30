#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

}
int partition(int a[],int high,int low)
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
swap(&a[high],&a[i+1]);
return i+1;


}
void quicksort(int a[],int high,int low)
{

if(high>low)
{

    int i=partition(a,high,low);
    quicksort(a,i-1,low);
    quicksort(a,high,i+1);
}

}
int firstcount(int a[],int m,int high,int low,int data)
{
 if(high >=low)
 {
    int mid=low+(high-low)/2;
    if(a[mid]==data &&(a[mid-1]!=data||mid==0))
        return mid;
        else if(a[mid]==data &&a[mid-1]==data)
            return firstcount(a,m,high-1,low,data);
            else if(a[mid] > data)
            return firstcount(a,m,mid-1,low,data);
            else
            return firstcount(a,m,high,mid+1,data);
            
            
            
        



 }
return -1;


}
int lastcount(int a[],int m,int low,int high,int data)
{
    if(high >=low)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==data &&((a[mid+1]!=data||mid==m-1)))
        return mid;
        else if(a[mid]==data &&a[mid+1]==data)
            return lastcount(a,m,low+1,high,data);
            else if(a[mid]> data)
              return lastcount(a,m,low,mid-1,data);
              else
              {
                  return lastcount(a,m,mid+1,high,data);
              }
              }
              return -1;
}
int main()
{
    int m,search,x,y;
    cout<<"\n Enter the size of the array ";
    cin>>m;
    int a[m];
    cout<<"\n Enter the data into the array ";
    for(int i=0;i<m;i++)
    cin>>a[i];
    cout<<"\n Enter the data to search ";
     cin>>search;
      quicksort(a,m-1,0);    
int x=firstcount(a,m,m-1,0,search);
int y=lastcount(a,m,0,m-1,search);
if(y-x+1 >0)
cout






    return 0;
}
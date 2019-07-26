#include<iostream>
using namespace std;


int bisearchrota(int a[],int start,int data,int finish)
{
    int mid=start+(finish-start)/2;

    if(start > finish)
    return 0;
    if(data==a[mid])
    return 1;

else if(a[start] <=a[finish])
{
    if(data >=a[start] &&a[mid] > data )
    bisearchrota(a,start,data,mid-1);
    else
    {
        bisearchrota(a,mid+1,data,finish);
    }
    


}
else
{
    if(data > a[mid] && data <=a[finish])
    bisearchrota(a,mid+1,data,finish);
    else
    {
        bisearchrota(a,start,data,mid-1);
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
int partition(int a[],int low,int high)
{
int pivot=a[high],i=low-1;
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

int i=partition(a,low,high);
quicksort(a,low,i-1);
quicksort(a,i+1,high);

}



}
void rotor(int a[],int m,int x)
{
    int pos;
    int b[m];
for(int i=0;i<m;i++)
{
     pos=(i+x)%m;
     b[pos]=a[i];
     
}
for(int i=0;i<m;i++)
a[i]=b[i];




}

int main()
{
int m,data,rotate;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
quicksort(a,0,m-1);
cout<<"\n Enter the rotation number ";
cin>>rotate;
rotor(a,m,rotate);
cout<<"\n Enter the data to search in the array ";
cin>>data;
if(bisearchrota(a,0,data,m-1))
cout<<"\n no exist in  the array ";
else
cout<<"\n no do not exist in the array ";









    return 0;

}

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
int pivot=a[high],i=low-1;
for(int j=low;j<=high-1;j++)
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
int ranker(int a[],int low,int high,int k)
{
    if(high==low)
    {
        return a[high];
    }
else
{
    
int i=partition(a,low,high);
    if(i==k)
    {
        return a[i];
    }
    else if(i>k)
    {
      return  ranker(a,low,i-1,k);
    }
    else
    {
    return ranker(a,i+1,high,k);
    }
    

}
}



int main()
{
int m,k;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the rank for the array ";
cin>>k;
cout<<"\n The "<<k<<"th smallest  no is "<<ranker(a,0,m-1,k);

    return 0;
}
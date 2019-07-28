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

if(high > low)
{
    int i=partition(a,low,high);
    quicksort(a,low,i-1);
    quicksort(a,i+1,high);
}


}
int main()
{
int m,found=0;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
quicksort(a,0,m-1);
int i=0,j=m-1,high=2*a[m-1],low=a[0]-100,sum;
while(i <j)
{
sum=a[i]+a[j];
if(sum > 0)
{
    if(high > sum)
    high=sum;
    j--;
}
else if (sum <0)
{
    if (low <sum)
    {
        low=sum;
    }
    i++;
}
else
{
    found=1;
    cout<<"\n sum close to zero "<<a[i]+a[j];
    break;
}


}
if(!found)
{
   low=(abs(high)>abs(low))?low:high;
cout<<"\n sum closest to zero "<<low;
}











    return 0;
}

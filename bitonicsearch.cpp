#include<iostream>
using namespace std;
void swap(int *a ,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int partition(int a[],int low,int high ,int check)
{
int pivot=a[high];
int i=low-1;

for(int j=low;j<=high-1;j++)
{
    if(check)
    {
if(a[j]>=pivot)
{ 
    i++;
    swap(&a[i],&a[j]);
}
    }
    else
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    

}
swap(&a[i+1],&a[high]);
return i+1;

}
void quicksort(int a[],int low,int high,int check)
{
if(low < high)
{

    int i=partition(a,0,high,check);
    quicksort(a,low,i-1,check);
      quicksort(a,i+1,high,check);
}


}
int main()
{
int m,bitonic;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"\n Enter the bitonic index ";
cin>>bitonic;
//quicksort(a,0,bitonic-1,0);
quicksort(a,bitonic+1,m-1,1);

cout<<"\n";
for(int i=0;i<m;i++)
cout<<"  "<<a[i];



    return 0;
}
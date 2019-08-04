#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;


}

int partition(int a[],int low,int high)
{
int pivot =a[high];
int i=low-1;
for(int j=low;j<=high-1;j++)
{
   if(a[j] <= pivot)
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
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
{

cin>>a[i];
}
quicksort(a,0,m-1);

int counter=0,maxcounter=0,data=a[0];
for(int i=0;i<m-1;i++)

{
if(a[i]==a[i+1])
{
    counter++;
}
else 
 {
     if(maxcounter < counter)
     {
     maxcounter=counter;
    data=a[i];

      }
      counter=0;
 }

}

cout<<"\n most repeated number is "<<data<<"  "<<"with "<<maxcounter+1<<"  repetitions";

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
int m;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m],b[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
int count[m+2];
for(int i=0;i<m+2;i++)
count[i]=0;
for(int i=0;i<m;i++)
{
count[a[i]]++;

}
for(int i=1;i<m+2;i++)
count[i]=count[i]+count[i-1];
for(int i=0;i<m;i++)
{
    b[count[a[i]]-1]=a[i];
    count[a[i]]--;
}

cout<<"\n sorted array ";
for(int i=0;i<m;i++)
cout<<b[i]<<"  ";

    return 0;
}
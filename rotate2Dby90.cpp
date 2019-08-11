#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"\n Enter the size of the nxn matrix ";
cin>>m;
int a[m][m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
{
    
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        
    }
}
int temp=0;
for(int i=0;i<m;i++)
{
    
    for(int j=i+1;j<m;j++)
    {
          temp=a[i][j];
       a[i][j]=a[j][i];
       a[j][i]=temp;
        
    }
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<m/2;j++)
    {
        temp=a[i][j];
        a[i][j]=a[i][m-1-j];
        a[i][m-1-j]=temp;
    }
}
cout<<"\n Rotated 90 degree array is ";
for(int i=0;i<m;i++)
{
    cout<<"\n";
    for(int j=0;j<m;j++)
    {
    cout<<a[i][j]<<" ";
    }
}

    return 0;
}

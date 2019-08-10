#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"\n Enter the size of the nxn matrix ";
cin>>m;
int size=0;
int a[m][m],b[2*m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        b[size++];
    }
}
int temp;
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
            temp=a[j][i];
    }
}



    return 0;
}

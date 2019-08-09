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




    return 0;
}

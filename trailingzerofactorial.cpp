#include<iostream>
using namespace std;
int main()
{
int m,sum=0;
cout<<"\n Enter the no ";
cin>>m;

for(int i=5;m/i>0;i=i*5)
{
    sum=sum+m/i;
}
cout<<"no of trailing zeroes in "<<m<<" factorial is "<<sum;


    return 0;
}
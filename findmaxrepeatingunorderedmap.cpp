#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int m,max=0,data;
unordered_map<int,int> search;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++) 
cin>>a[i];
unordered_map<int,int>::iterator p;
for(int i=0;i<m;i++)
{
p=search.find(a[i]);
if(p==search.end())
{
    search[a[i]]=1;
}
else
{
    search[p->first]=p->second+1;
}


}
for(auto x:search)
{
     if(max <x.second)
     {
         data=x.first;
         max=x.second;
     }
}
cout<<"\n most repeated number is "<<data<<"  "<<"with "<<max<<"  repetitions";




    return 0;
}
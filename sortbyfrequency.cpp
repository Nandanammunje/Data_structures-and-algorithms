#include<iostream>
#include<unordered_map>
using namespace std;
void sortfreq(int a[],int m)
{
unordered_map<int,int> umap;
for(int i=0;i<m;i++)
{
  if(umap.find(a[i])==umap.end())
  {
    umap[a[i]]=1;
  }
  else
  {
    umap[a[i]]++;
  }
  
}
int temp,j;
for(int gap=m/2;gap>0;gap=gap/2)
{

  for(int i=gap;i<m;i++)
  {
    temp=a[i];
    for(int j=i;j>=gap&&umap[temp] >umap[a[j-gap]];j=j-gap)
        a[j]=a[j-gap];
        a[j]=temp;
    
  }
}


}
int main()
{
int m,data;
cout<<"\n Enter the size of the array ";
cin>>m;
int a[m];
cout<<"\n Enter the data into the array ";
for(int i=0;i<m;i++)
cin>>a[i];
sortfreq(a,m);
for(int i=0;i<m;i++)
cout<<"  "<<a[i];

  return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int m,exor,right_bit,x=0,y=0;
	cout<<"\n Enter the size of the array ";
	cin>>m;
	int a[m];
	cout<<"\n Enter the data into the array ";
	for(int i=0;i<m;i++)
     cin>>a[i];
     exor=a[0];
    for(int i=1;i<m;i++)
    exor=exor^a[i];
	for(int i=1;i<=m;i++)
        exor=exor^i;
	right_bit=exor&~(exor-1);
        for(int i=0;i<m;i++)
        {
            if(a[i]&right_bit)
            x=x^a[i];
            else
            y=y^a[i];
            }
            for(int i=1;i<=m;i++)
            {
        if(i&right_bit)
                x=x^i;
                else
                  y=y^i;
                }	
	           cout<<"the missing no is "<<x;
               cout<<"\n the repeating no is "<<y;
	
	
	
	
	
	
	
	
	
	
	return 0;
}

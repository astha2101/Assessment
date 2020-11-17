#include<iostream>
using namespace std;
int main()
{
int num,i,j;
cout<<"Enter a number :"<<endl;
cin>>num;
int space=0;
for(i=1;i<=num;i++)
{
for(int k=0;k<space;k++) cout<<" ";
for(j=i;j<=num;j++) cout<<j<<" ";
cout<<endl;
space++;
}
space=space-2;
i=i-2;
for(;i>=1;i--)
{
for(int k=0;k<space;k++) cout<<" ";
for(j=i;j<=num;j++) cout<<j<<" ";
cout<<endl;
space--;
}
return 0;
}
#include<iostream>
using namespace std;

void spiral(int arr[][10],int b,int r)
{
int i,t=0,l=0;

cout<<"\n The Spiral Array is : ";
while (t<b && l<r)
{
for (i=l;i<r;i++)
{
cout << arr[t][i]<<" ";
}
t++;

for (i=t;i<b;i++)
{
cout<<arr[i][r-1]<< " ";
}
r--;

if (t<b)
{
for (i=r-1;i>= l;i--)
{
cout << arr[b-1][i]<< " ";
}
b--;

}

if (l<r)
{
for (i=b-1;i>=t;i--)
{
cout << arr[i][l]<< " ";
}
l++;
}
}
}

int main()
{
int arr[10][10];
int r,c;
cout<<"Enter Row : ";
cin>>r;
cout<<"Enter Col : ";
cin>>c;

cout<<"Feed the array > \n";
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
cin>>arr[i][j];

cout<<"Normal Array >\n";

for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
cout<<arr[i][j]<<" ";
cout<<"\n";
}
spiral(arr,r,c);
return 0;
}
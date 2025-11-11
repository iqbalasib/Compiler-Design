#include<iostream>
using namespace std;
int main()
{
int arr1[5];
int sum=0;
int size = sizeof(arr1)/sizeof(arr1[0]);

cout<<"Enter values"<<endl;
for(int i=0;i<size;i++)
{
    cin>>arr1[i];
}

for(int i=0;i<size;i++)
{
    sum=sum+arr1[i];
}

double average=sum/size;
cout<<"average is "<<average<<endl;


}
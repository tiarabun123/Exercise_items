#include<iostream>
using namespace std;

void sort(int *arr,int l)
{
    for(int i=0;i<l-1;i++)
    {
    for(int j=0;j<l-1-i;j++)
    {
    if(arr[j]>arr[j+1])
    {
    int a=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=a;
    }
    }
    }
}

void printarray(int *arr,int l)
{
for(int i=0;i<l;i++)
{
cout << arr[i] <<" ";
}
}

int main()
{
    
    int arr[]={5,4,2,3,6,7,9,8,10,1};
    
    int l=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,l);
    
    printarray(arr,l);
    
    return 0;
}
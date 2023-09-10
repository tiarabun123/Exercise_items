#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={5,4,2,3,6,7,9,8,3,1};
    int l=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    for(int i=0;i<l-1;i++)
    {
    for(int j=0;j<l-1-i;j++)
    {
    if(arr[j]>arr[j+1])
    {
    a=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=a;
    }
    }
    }
    
    for(int i=0;i<l;i++)
    {
    cout << arr[i] << endl;
    }
    return 0;
}
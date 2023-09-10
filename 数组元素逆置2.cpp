#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,3,4,6,5,7,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    int start=0,end=l-1;
    
    while(start<end)
    {
    a=arr[start];
    arr[start]=arr[end];
    arr[end]=a;
    start++;end--;
    }
    
    
    for(int i=0;i<l;i++)
    {
    cout << arr[i] << endl;
    }
    return 0;
}
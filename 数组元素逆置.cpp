#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,3,4,6,5,7,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    
    for(int i=0;i<l/2;i++)
    {
    a=arr[i];
    arr[i]=arr[l-1-i];
    arr[l-1-i]=a;
    }
    
    for(int i=0;i<l;i++)
    {
    cout << arr[i] << endl;
    }
    return 0;
}
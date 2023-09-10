#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    cout << "请输入三个数" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a>b)
    {
     if(a>c)
     {
     cout << "最大的是第一个数:" <<a<< endl;
     }
     else
     {
     cout << "最大的是第三个数:" <<c<< endl;
     }
    }
    else
    {
     if(b>c)
     {
     cout << "最大的是第二个数:" <<b<< endl;
     }
     else
     {
      cout << "最大的是第三个数:" <<c<< endl;
     }
    }
    
    
    
    
    
    return 0;
}
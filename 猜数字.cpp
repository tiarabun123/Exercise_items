#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    srand((unsigned int)time(NULL));
    int a=0;
    int i=rand()%1000+1;
    while(a!=i)
    {
    cout << "请输入你猜的数" << endl;
    cin >> a;
    if(a<i)
    {
    cout << "猜小了" << endl;
    }
    else if(a>i)
    {
    cout << "猜大了" << endl;
    }
    else
    {
    cout << "猜对了，数字是" <<i<< endl;
    }
    }
    return 0;
}
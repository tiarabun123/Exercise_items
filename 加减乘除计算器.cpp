#include<iostream>
using namespace std;

int main()
{
    int p=0;
    ST:
    cout <<endl<< "请选择你要进行的运算" << endl;
    cout << "1.加法 2.减法 3.乘法 4.除法" << endl;
    cin >> p;
    
    if(p!=1&&p!=2&&p!=3&&p!=4)
    {
    cout << "请输入正确的数字" << endl;
    goto ST;
    }
    
    else if(p==1){
    double a1,a2;
    cout << "请依次输入两个加数" << endl;
    cin >> a1;
    cin >> a2;
    cout << a1<< "+"<<a2<<"=" <<a1+a2<< endl;
    goto ST;
    }
    
    else if(p==2){
    double b1,b2;
    cout << "请依次输入被减数和减数" << endl;
    cin >> b1;
    cin >> b2;
    cout << b1<< "-"<<b2<<"=" <<b1-b2<< endl;
    goto ST;
    }
    
    else if(p==3){
    double c1,c2;
    cout << "请依次输入两个乘数数" << endl;
    cin >> c1;
    cin >> c2;
    cout << c1<< "*"<<c2<<"=" <<c1*c2<< endl;
    goto ST;
    }
    
    else if(p==4){
    double d1,d2;
    cout << "请依次输入被除数和除数" << endl;
    cin >> d1;
    cin >> d2;
    cout << d1<< "/"<<d2<<"=" <<d1/d2<< endl;
    goto ST;
    }
    
    return 0;
}
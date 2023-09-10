#include<iostream>
using namespace std;


struct person
{
string name;
string sex;
int age;
string phone;
string address;
};

void add(person *per,int *num)
{
if(*num<1000){
cout << "请输入要添加的联系人信息:" << endl;
cout << "姓名:";
cin >> per[*num].name;
cout << "性别:" ;
cin >> per[*num].sex;
cout << "年龄:";
cin >> per[*num].age;
cout << "电话:" ;
cin >> per[*num].phone;
cout << "地址:";
cin >> per[*num].address;
(*num)++;
}
else cout << "通讯录已满" << endl;
}

void print(person *per,int num)
{
if(num!=0)
{
for(int i=0;i<num;i++)
{
cout << "姓名:" <<per[i].name<<" ";
cout << "性别:" <<per[i].sex<<" ";
cout << "年龄:" <<per[i].age<<"\n";
cout << "电话:" <<per[i].phone<<" ";
cout << "地址:" <<per[i].address<<endl<<endl;
}
}
else cout << "通讯录暂无好友" << endl;
}

void dlt(person *per,string str,int *num)
{
int a=-1;
for(int i=0;i<1000;i++)
{
if(per[i].name==str)
{
a=i;
}
}
if(a==-1)
{
cout << "查无此人" << endl;
}
else
{
for(int i=0;i<*num-i;i++)
{
per[i]=per[i+1];
}
(*num)--;
cout << "删除成功" << endl;
}
}

void modify(person *per,string str,int num)
{
int a=0;
for(int i=0;i<num;i++)
{
if(str==per[i].name)
{
a=1;
cout << "请输入要修改的联系人信息:" << endl;
cout << "姓名:";
cin >> per[i].name;
cout << "性别:" ;
cin >> per[i].sex;
cout << "年龄:";
cin >> per[i].age;
cout << "电话:" ;
cin >> per[i].phone;
cout << "地址:";
cin >> per[i].address;
}
}
if(a==0)
{
cout << "查无此人" << endl;
}
}


void alldlt(person *per,int *num)
{
person temp;
for(int i=0;i<*num;i++)
{
per[i]=temp;
}
*num=0;
cout << "联系人清空完毕" << endl;
}

void find(person *per,string str,int num)
{
int a=0;
for(int i=0;i<num;i++)
{
if(str==per[i].name)
{
cout << "姓名:" <<per[i].name<<" ";
cout << "性别:" <<per[i].sex<<" ";
cout << "年龄:" <<per[i].age<<"\n";
cout << "电话:" <<per[i].phone<<" ";
cout << "地址:" <<per[i].address<<endl<<endl;
a=1;
}
}
if(a==0)
{
cout << "查无此人" << endl;
}
}

int main()
{
    int num=0,choice=-1,a=1;
    person per[1000];
    string str;
    while(a)
    {
    cout << "************************" << endl;
    cout << "************************" << endl;
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.显示联系人 *****" << endl;
    cout << "***** 3.删除联系人 *****" << endl;
    cout << "***** 4.查找联系人 *****" << endl;
    cout << "***** 5.修改联系人 *****" << endl;
    cout << "***** 6.清空联系人 *****" << endl;
    cout << "***** 7.退出通讯录 *****" << endl;
    cout << "************************" << endl;
    cout << "************************" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    add(per,&num);
    break;
    case 2:
    print(per,num);
    break;
    case 3:
    cout << "输入你想删除的人的名字" << endl;
    cin >> str;
    dlt(per,str,&num);
    break;
    case 4:
    cout << "输入你想查找的人的名字" << endl;
    cin >> str;
    find(per,str,num);
    break;
    case 5:
    cout << "输入你想修改的人的名字" << endl;
    modify(per,str,num);
    break;
    case 6:
    alldlt(per,&num);
    break;
    case 7:
    a=0;
    break;
    default:
    cout << "请输入正确的序号" << endl;
    break;
    }
    
    }
    
    
    return 0;
}
#include<iostream>
using namespace std;
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divv(int a,int b);
int main()
{
    int choice;
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    do
    {
        cout<<"\n operations\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.exit";
        cin>>choice;
        switch(choice)
        {
            case 1:
            add(a,b);
            break;
            case 2:
            sub(a,b);
            break;
            case 3:
            mul(a,b);
            break;
            case 4:
            divv(a,b);
            break;
            case 5:
            exit(0);
            break;
        }       
    }
    while(choice!=5);
    return 0;
}
int add(int a,int b)
{
    cout<<"the addition of the number is:"<<a+b;
    return 0;
}
int sub(int a,int b)
{
    cout<<"the substraction of the number is:"<<a-b;
    return 0;
}
int mul(int a,int b)
{
    cout<<"the multiplication of the number is:"<<a*b;
    return 0;
}
int divv(int a,int b)
{
    cout<<"the division of the number is:"<<a/b;
    return 0;
}

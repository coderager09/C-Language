#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"input 3 sides of a triangle: \n";
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout<<"equilateral \n";
    }
    else if(a==b || b==c || c==a){
        cout<<"isosceles \n";
    }
    else{
        cout<<"scalene \n";
    }
    return 0;
}    
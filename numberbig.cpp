#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    
    cin>>a>>b>>c;
    if(a>b){
        cout<<"a is big \n";
    }
    else if(c>b){
        cout<<"c is big \n";
    }
    else {
        cout<<"b is big \n";
    }

    return 0;
}
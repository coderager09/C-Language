#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is big \n";
        }
        else{
            cout<<"c is big \n";            
        }
    }
    else{
        if(b>c){
            cout<<"b is big \n";
        }
        else{
            cout<<"c is big \n";
        }
    }  
     return 0;
}
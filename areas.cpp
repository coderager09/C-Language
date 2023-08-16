#include<iostream>
using namespace std;
float area (float r){
    return(3.14159 * r * r);
}
float area(int l,int b){
    return(l * b);
}
float area(float base,float h){
    return(0.5 * base * h);
}
int main(){
    float base,h,r;
    int l,b;
    int ch;

    do
    {
        cout<<"\n\n  enter option \n  1.area of circle  \n  2.area of rectangle  \n  3.area of triangle \n  4.exit \n\n\n  enter your choice!!!! \n";
        cin>>ch;
        switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }

                        case 2:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }

                        case 3:
                        {
                                cout<<"\n Enter the Base & Height of Triangle : ";
                                cin>>base>>h;
                                cout<<"\n Area of Triangle : "<<area(base,h);
                                break;
                        }
                        case 4:
                        {
                                exit(0);
                                break;                        
                        }
                        default:
                        {
                                cout<<"\n choice not found!!!!! ";
                                break;
                        }
                }
    }while (ch!=4);
    return 0;
}
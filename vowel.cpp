#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter an alphabet you want to find whether a constant or vowel: \n";
    cin>>n;

    

    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        cout<<"given alphabet is vowel"<<endl;
    }
    else{
        cout<<"given alphabet is consonent"<<endl;
    }
return 0;  
}
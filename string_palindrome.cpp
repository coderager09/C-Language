#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char str1[100];
    char str2[100];
    int len,i,j;
    cout<<"enter the word:";
    cin>>str1;
    len=strlen(str1);
    for(i=len-1,j=0;j<len;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[len]='\0';
    cout<<str1<<endl;
    cout<<len<<endl;
    cout<<str2;
    if(strcmp(str1,str2))
    {
        cout<<"\n the word is not palindrome.";
    }
    else
    {
        cout<<"\n the word is palindrome.";
    }
    return 0;
}
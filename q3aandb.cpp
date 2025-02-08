#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
   char string[20];
    cout<<"enter the string";
cin>>string;
    int i,length;
    int flag=0;
    length=strlen(string); 
    for(i=0;i<length;i++){
        if(string[i]!=string[length-i-1])
        {
            flag=1;
            break;
        
        }
    }
    if(flag){
        cout<<string<<"string is not palindrome";
    }
    else
    cout<<string<< " "<<"string is a palindrome";
    return 0;
}
 
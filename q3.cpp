#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter a number";
    cin>> n;
    int num=n+1;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            num++;
            break;
        
        }
    }
    if(count==0)
    {
        cout<<"it is a prime number and next prime number is greater than input is" <<num<<endl;
    

    }
    else
    cout<< " it is not a prime number";

    return 0;
}
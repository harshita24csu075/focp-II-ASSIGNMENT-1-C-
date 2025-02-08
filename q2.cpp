#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter a number";
    cin>> n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"it is a prime number";

    }
    else
    cout<<"factors of" << n << "are";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
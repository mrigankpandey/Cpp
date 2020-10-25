#include<iostream>
using namespace std;

int main()
{
    int i,num,flag=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<num<<"is a prime number"<<endl;
    else
    cout<<num<<"not a prime number"<<endl;
    return 0;
}

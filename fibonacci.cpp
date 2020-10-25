#include<iostream>
using namespace std;

int fib(int num)
{

   if(num<=1)
    return num;
   return (fib(num-1)+fib(num-2));
}

int main()
{
    int i=0,x;
    cout<<"Enter number of terms"<<endl;
    cin>>x;
    while(i<x)
    {
        cout<<" "<<fib(i);
        i++;
    }
    return 0;
}    

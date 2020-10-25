#include<iostream>
using namespace std;
int main()
{
    int a[10]={0},num,n,flag=0,i,position=0;

    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to search"<<endl;
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {flag=1;
         position=i+1;
         break;
        }
    }
    if(flag)
    cout<<"Element "<<num<<" found at position:"<<position<<endl;
    else
    cout<<"Element not found"<<endl;

    return 0;
}

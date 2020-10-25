#include<iostream>
using namespace std;

int main()
{
    int i,n,a[20]={0},sum=0;
    cout<<"Enter size of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
     sum+=a[i];
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
    

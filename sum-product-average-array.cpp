#include<iostream>
using namespace std;

int main()
{
    int i,n,a[20]={0},sum=0,product=1,average=0;
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
     product=product*=a[i];
    }
    average=sum/n;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The product is: "<<product<<endl;
    cout<<"The average is: "<<average<<endl;
    return 0;
}
    

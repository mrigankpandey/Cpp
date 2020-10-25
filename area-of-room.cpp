#include<iostream>
using namespace std;

int main()
{
  cout<<"Please enter the length of the room\n";
  int length=0;
  cin>>length;

  cout<<"Please enter the width of the room\n";
  int width=0;
  cin>>width;

  int area=0;
  area=length*width;

  cout<<"The area of the room is "<<area<<"sq. feet.\n";

  return 0;
}

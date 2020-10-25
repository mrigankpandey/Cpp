#include<iostream>
using namespace std;

int main()
{
  int myage{22};
  float rupees{100.0};
  char name{'M'};

  cout<<"Size of Integer is "<<sizeof(myage)<<".\n";
  cout<<"Size of Float is "<<sizeof(rupees)<<".\n";
  cout<<"Size of Character is "<<sizeof(name)<<".\n";

  return 0;
}

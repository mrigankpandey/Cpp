#include <iostream>
using namespace std;

int main()
{
  string name;
  int age;
  cout<<"Please enter your name"<<endl;
  getline(cin, name);
  cout<<"Please enter age"<<endl;
  cin>>age;
  if(age>=18)
  {
    cout<<"Welcome to Electronic Voting System."<<endl;
    cout<<"You're eligible for voting."<<endl;
  }
  else
  cout<<"Not eligible for voting";

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

class User
{
private:
  string name;
  ll rollNo;

public:
  User(string &name, ll &rollNo)
  {
    this->name = name;
    this->rollNo = rollNo;
  }

  void display();
};

void User::display()
{
  cout << this << endl
       << "Name: " << name << endl
       << "Roll No: " << rollNo << endl;
}

int main(void)
{
  string name;
  ll rollNo;

  cin >> name >> rollNo;

  User user1(name, rollNo);

  user1.display();
}
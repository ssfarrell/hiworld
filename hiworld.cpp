#include <iostream>
using namespace std;

string embolden( string s ){
  string res;
  res = "\033[0;1m" + s + "\033[0m";
  return res;
}

int main()
{
	cout << embolden("Hello") << ", world" << endl;
	return 0;
}

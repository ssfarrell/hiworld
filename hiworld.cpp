#include <iostream>
#include <string>
using namespace std;

int main()
{
	string math[4] = {"keppler", "lorenz", "godel", "pascal"};

	for(int i=0; i < 4; i++)
	{
		cout << math[i] << endl;
	if(i==3)
		cout << "That's four math people." <<endl;
	}

	return 0;
}

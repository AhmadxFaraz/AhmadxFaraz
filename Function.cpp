#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Hey, you!\n";
	string kitty;
	cout << "Tell your kitty name.\n";
	getline(cin, kitty);
	cout << kitty << "! That's a nice name";
	return 0;
}
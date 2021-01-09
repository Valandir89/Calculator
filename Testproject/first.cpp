#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter anything:";
	string anything;
	getline(cin, anything);
	cout << anything;

	return 0;
}
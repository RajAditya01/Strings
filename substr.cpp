#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	// Take any string
	string s1 = "Geeks";
    string s2 ="eeks";

	// Copy two characters of s1 (starting
	// from position 3)
	string r = s1.substr(1,3);

	// prints the result
	cout << "String is: " << r;

	return 0;
}

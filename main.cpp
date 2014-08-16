#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	int (*p)(int, char **);
	p = main;
	cout << "daa\n";
	p(argc, argv);
	return 0;
}

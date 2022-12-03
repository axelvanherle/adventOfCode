#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string line;
	ifstream myfile("input.txt");

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << endl;
		}
		
		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}
}

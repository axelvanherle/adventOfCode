#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream myfile("input.txt");

	int score = 0;

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (line[0] == 'A')
			{
				if (line[2] == 'X')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Y')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Z')
				{
					cout << line << "test" << endl;
				}
			}
			else if (line[0] == 'B')
			{
				if (line[2] == 'X')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Y')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Z')
				{
					cout << line << "test" << endl;
				}
			}
			else if (line[0] == 'C')
			{
				if (line[2] == 'X')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Y')
				{
					cout << line << "test" << endl;
				}
				if (line[2] == 'Z')
				{
					cout << line << "test" << endl;
				}
			}
			
		}
		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	return 0;
}

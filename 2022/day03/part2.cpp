#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	ifstream myfile("input.txt");
	
	string a, b, c;

	int answer = 0;
	int counter = 0;
	int testChar = 0;

	if (myfile.is_open())
	{
		while (getline(myfile, a))
		{
			counter = 0;
			getline(myfile, b);
			getline(myfile, c);

			for (testChar = 'a'; testChar <= 'z'; ++testChar)
			{
				if (a.find(testChar) != a.npos && b.find(testChar) != b.npos && c.find(testChar) != c.npos)
				{
					counter += testChar - 'a' + 1;
				}
			}

			for (testChar = 'A'; testChar <= 'Z'; ++testChar)
			{
				if (a.find(testChar) != a.npos && b.find(testChar) != b.npos && c.find(testChar) != c.npos)
				{
					counter += testChar - 'A' + 27;
				}
			}

			answer += counter;
		}
	}

	else
	{
		cout << "Unable to open file";
	}

	cout << answer << endl;
}
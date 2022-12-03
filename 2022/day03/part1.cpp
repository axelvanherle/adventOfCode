#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string line;
	ifstream myfile("input.txt");

	char symbol;
	int stringLength = 0;
	int counter = 0;
	int tempcounter = 0;
	string splitStrings[2];

	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			stringLength = line.length();

			cout << "ORIGINAL STRING: " << line << endl;
			splitStrings[0] = line.substr(0, stringLength / 2);
			splitStrings[1] = line.substr(stringLength / 2, stringLength);
			cout << splitStrings[0] << endl
				 << splitStrings[1] << endl;

			for (int i = 0; i <= stringLength / 2; i++)
			{
				symbol = '0';
				for (int j = 0; j <= stringLength / 2; j++)
				{
					if (splitStrings[0][j] == splitStrings[1][i])
					{
						symbol = splitStrings[0][j];
						cout << splitStrings[0][j] << symbol;
						break;
					}
				}
				if (symbol != '0')
				{
					break;
				}
			}

			for (int i = 0; i <= alphabet.length(); i++)
			{
				if (symbol == alphabet[i])
				{
					tempcounter = i+1;
				}
			}

			counter += tempcounter;
		}

		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	cout << endl << counter << endl;
}
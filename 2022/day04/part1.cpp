#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string line;
	ifstream myfile("input.txt");

	int c = 0;
	int num1Min, num1Max, num2Min, num2Max;
	char trash;

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			myfile >> num1Min >> trash >> num1Max >> trash >> num2Min >> trash >> num2Max;
			cout << num1Min << trash << num1Max << trash << num2Min << trash << num2Max << endl;

			if ((num1Min >= num2Min && num1Max <= num2Max) || (num2Min >= num1Min && num2Max <= num1Max))
			{
				c++;
				// ;)
			}
		}

		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	cout << c << endl;
}

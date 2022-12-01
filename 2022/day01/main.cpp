#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream myfile("input.txt");

	int amountCallories = 0;
	int highestCallories[3] = {0};

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (line.empty())
			{
				amountCallories = 0;
			}
			else
			{
				amountCallories = amountCallories + atoi(line.c_str());

				if (amountCallories > highestCallories[0])
				{
					highestCallories[2] = highestCallories[1];
					highestCallories[1] = highestCallories[0];
					highestCallories[0] = amountCallories;
				}
				else if (amountCallories > highestCallories[1])
				{
					highestCallories[2] = highestCallories[1];
					highestCallories[1] = amountCallories;
				}
				else if (amountCallories > highestCallories[2])
				{
					highestCallories[2] = amountCallories;
				}
			}
		}
		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	cout << highestCallories[0] + highestCallories[1] + highestCallories[2] << endl;
	cout << highestCallories[0] << " " << highestCallories[1] << " " << highestCallories[2] << endl;
	return 0;
}

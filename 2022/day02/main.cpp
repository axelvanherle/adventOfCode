#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// A - X = Rock
// B - Y = Paper
// C - Z = Scissors

int main()
{
	string line;
	ifstream myfile("input.txt");

	int score = 0;
	int score2 = 0;

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (line[2] == 'X')
			{
				score += 1;

				if (line[0] == 'A')
				{
					score += 3;
					score2 += 3;
				}
				else if (line[0] == 'B')
				{
					// Do nothing
					score2 += 2;
					score2 += 1;
				}
				else if (line[0] == 'C')
				{
					score += 6;
					score2 += 2;
				}
			}

			if (line[2] == 'Y')
			{
				score += 2;
				score2 += 3;

				if (line[0] == 'A')
				{
					score += 6;
					score2 += 1;
				}
				else if (line[0] == 'B')
				{
					score += 3;
					score2 += 2;
				}
				else if (line[0] == 'C')
				{
					// Do nothing
					score2 += 3;
				}
			}

			if (line[2] == 'Z')
			{
				score += 3;
				score2 += 6;

				if (line[0] == 'A')
				{
					// Do nothing
					score2 += 2;
				}
				else if (line[0] == 'B')
				{
					score += 6;
					score2 += 3;
				}
				else if (line[0] == 'C')
				{
					score += 3;
					score2 += 1;
				}
			}
		}
		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	cout << "Score is " << score << endl;
	cout << "Score2 is " << score2 << endl;

	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

/*
[S]                 [T] [Q]
[L]             [B] [M] [P]     [T]
[F]     [S]     [Z] [N] [S]     [R]
[Z] [R] [N]     [R] [D] [F]     [V]
[D] [Z] [H] [J] [W] [G] [W]     [G]
[B] [M] [C] [F] [H] [Z] [N] [R] [L]
[R] [B] [L] [C] [G] [J] [L] [Z] [C]
[H] [T] [Z] [S] [P] [V] [G] [M] [M]
 1   2   3   4   5   6   7   8   9
*/

vector<string> stack{
	"HRBDZFLS",
	"TBMZR",
	"ZLCHNS",
	"SCFJ",
	"PGHWRZB",
	"VJZGDNMT",
	"GLNWFSPQ",
	"MZR",
	"MCLGVRT"};

vector<string> stack2{
	"HRBDZFLS",
	"TBMZR",
	"ZLCHNS",
	"SCFJ",
	"PGHWRZB",
	"VJZGDNMT",
	"GLNWFSPQ",
	"MZR",
	"MCLGVRT"};

int main()
{
	string line;
	ifstream myfile("input.txt");

	int a, b, c;
	string trash;

	if (myfile.is_open())
	{
		while (myfile >> trash >> a >> trash >> b >> trash >> c)
		{
			cout << a << b << c << endl;
			b--;
			c--;
			for (int i = 0; i < a; ++i)
			{
				stack[c].push_back(stack[b].back());
				stack[b].pop_back();
			}

			stack2[c] = stack2[c] + (stack2[b].substr(stack2[b].size() - a));
			stack2[b] = stack2[b].substr(0, stack2[b].size() - a);
		}

		myfile.close();
	}

	else
	{
		cout << "Unable to open file";
	}

	for (int i = 0; i < stack.size(); i++)
	{
		cout << stack[i] << endl;
	}
	cout << " ============================== " << endl;
	for (int i = 0; i < stack2.size(); i++)
	{
		cout << stack2[i] << endl;
	}
}

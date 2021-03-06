#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argv, char * argc[]) {
	if (argv != 3)
	{
		cerr << "Not enough arguments" << endl;
		return 1;
	}

	const string fileName = argc[1];
	ifstream strm(fileName);
	if (!strm.is_open())
	{
		cerr << "File not opened yet" << endl;
		return 1;
	}

	string needstr = argc[2];
	string str;

	vector<string> getStr;
	while (getline(strm, str)) {
		if (str.empty())
		{
			break;
		}
		auto result = find(getStr.begin(), getStr.end(), needstr);

		if (result != getStr.end()) {
			cout << "contains: " << needstr << '\n';
		}
		/*else {
			cout << "tokens not contains: " << needstr << '\n';
		}*/
	}

}

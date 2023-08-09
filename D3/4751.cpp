#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T;
	string str;
	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		string s1 = "..#..";
		string s1_1 = ".#..";
		string s2 = ".#.#.";
		string s2_1 = "#.#.";
		string s3 = "#.";
		string s3_1 = ".#.";

		cin >> str;
		if (str.length() > 1) {
			for(int i = 0; i < str.length() - 1; i++) {			
				s1 += s1_1;
				s2 += s2_1;
				s3 += str[i] + s3_1;
			}
			cout << s1 << "\n";
			cout << s2 << "\n";
			cout << s3 + str[str.length()-1] + ".#" << "\n";
			cout << s2 << "\n";
			cout << s1 << "\n";
		} else {
			cout << s1 << "\n";
			cout << s2 << "\n";
			cout << s3 + str + ".#" << "\n";
			cout << s2 << "\n";
			cout << s1 << "\n";
		}
	}
	return 0;
}

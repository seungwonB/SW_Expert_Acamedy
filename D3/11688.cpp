#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	string str;
	int test_case, T, A, B;
	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> str;
		A = B = 1;
		for(int i = 0; i <str.length(); i++) {
			if (str[i] == 'L') {
				A = A;
				B = A + B;
			} else {
				A = A + B;
				B = B;
			}
		}
				
		cout << "#" << test_case << " " << A << " " << B << "\n";
	}
	return 0;
}

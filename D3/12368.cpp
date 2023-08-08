#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T, A, B, res;
	cin >> T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> A >> B;
		if (A+B > 24) {
			res = (A+B) - 24;
		} else if (A+B == 24) {
			res = 0;
		} else {
			res = A + B;
		}
		
		cout << "#" << test_case << " " << res << "\n";
	}
	return 0;
}

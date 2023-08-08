#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T, N, res;
	cin >> T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		res = N / 3;
		cout << "#" << test_case << " " << res << "\n";
	}
	return 0;
}

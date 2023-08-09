#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T, N;
	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		N *= 2;
						
		cout << "#" << test_case << " " << N/60 << " " << N%60 << "\n";
	}
	return 0;
}

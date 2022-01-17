#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int test_case, T, lenOfCase, valueNum = 1;
	string test_num, valueStr;

	string Strings[10] = { "ZRO", "ONE", "TWO", "THR", "FOR",
	"FIV", "SIX", "SVN", "EGT", "NIN" };

	int Numbers[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++) {
		cin >> test_num >> lenOfCase;

		vector<int> vec;

		for (int i = 0; i < lenOfCase; i++) {
			cin >> valueStr;
			for (int j = 0; j < 10; j++) {
				if (valueStr == Strings[j]) {
					valueNum = j;
					break;
				}
			}
			vec.push_back(valueNum);
		}
		sort(vec.begin(), vec.end());

		printf("%s\n", test_num.c_str());

		for (int i = 0; i < lenOfCase; i++) {
			for (int j = 0; j < 10; j++) {
				if (vec[i] == j) {
					cout << Strings[j] << " ";
				}
			}
		}
	}
	return 0;
}

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int test_case, T;
	string str;

	for (test_case = 1; test_case <= 10; test_case++) {
		scanf_s("%d", &T);
		cin >> str;

		for (int i = 1; i <= T; i++) {
			if (str[i - 1] == str[i]) {
				str.erase(i - 1, 2);
				i = 0;
				T -= 2;
			}
		}

		cout << "#" << test_case << " " << str << "\n";
	}
	return 0;
}


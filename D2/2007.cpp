#include <cstdio>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int test_case, T;
char ch;
string str, temp, answer;

void GetPattern() {
	ch = str[0];
	for (int i = 1; i < str.size(); i++) {
		if (ch == str[i]) {
			temp = str.substr(0, i);

			if (str.substr(i, temp.size()) == temp) {
				answer = temp;
				break;
			}
			else {
				temp = "";
			}
		}
	}
}

int main() {
	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {
		cin >> str;
		GetPattern();
		cout << "#" << test_case << " " << answer.size() << "\n";
	}
}

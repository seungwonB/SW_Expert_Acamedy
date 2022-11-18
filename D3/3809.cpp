#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int tc, T, N, key;
char ch;
string str;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;
		str = "";

		for (int i = 0; i < N; i++) {
			cin >> ch; // 문자로 입력 받아
			str += ch; // 문자열로 저장
		}

		key = 0;
		while (1) { 
			if (str.find(to_string(key)) == string::npos) { // find했는데 없는 경우 
				break;
			}
			key++;
		}

		cout << "#" << tc << " " << key << "\n";
	}
	return 0;
}

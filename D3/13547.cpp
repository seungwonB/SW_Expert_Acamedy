#include<iostream>
#include<queue>
#include<string>
using namespace std;

int T, tc, sum_x;
string str, answer;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> str;

		sum_x = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'x')
				sum_x++;
		}

		if (sum_x >= 8) answer = "NO";
		else answer = "YES";

		cout << "#" << tc << " " << answer << "\n";
	}
}

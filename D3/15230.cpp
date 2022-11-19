#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, cnt;
string str;
string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {		
		cin >> str;

		cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != alphabet[i])
				break;
			else
				cnt++;
		}

		cout << "#" << tc << " " << cnt << "\n";
	}
	return 0;
}

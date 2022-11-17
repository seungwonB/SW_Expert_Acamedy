#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int tc, T, money;
int changes[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

int main() {
	cin >> T;
	for (tc = 1; tc <= T; tc++) {
		cin >> money;

		cout << "#" << tc << "\n";
		for (int i = 0; i < 8; i++) {
			cout << money / changes[i] << " ";
			money %= changes[i];
		}
		cout << "\n";
	}
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, x;
double sum;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		vector<int> v;

		for (int i = 0; i < 10; i++) {
			cin >> x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());
		sum = 0;
		for (int i = 1; i < 9; i++) {
			sum += v[i];
		}

		cout << "#" << tc << " " << round(sum / 8) << "\n";
	}
	return 0;
}

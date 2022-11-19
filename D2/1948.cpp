#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, f_m, f_d, s_m, s_d, day_sum;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> f_m >> f_d >> s_m >> s_d;
		day_sum = 0;
		for (int i = f_m; i < s_m; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				day_sum += 31;
			}
			else if (i == 2) {
				day_sum += 28;
			}
			else {
				day_sum += 30;
			}
		}
		day_sum += (s_d - f_d + 1);

		cout << "#" << tc << " " << day_sum << "\n";
	}
	return 0;
}

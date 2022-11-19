#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, h1, m1, h2, m2, hour, minutes;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> h1 >> m1 >> h2 >> m2;

		minutes = m1 + m2;

		if (minutes >= 60) {
			minutes -= 60;
			h1++;
		}
			
		hour = h1 + h2;

		if (hour >= 12)
			hour -= 12;

		cout << "#" << tc << " " <<  hour << " " << minutes << "\n";
	}
	return 0;
}

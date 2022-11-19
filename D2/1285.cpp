#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, N, cnt;
int location[1001];

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> location[i];
			if (location[i] < 0) {
				location[i] *= -1;
			}
		}
		sort(location, location + N);
		cnt = 1;
		for (int i = 1; i < N; i++) {
			if (location[0] == location[i])
				cnt++;
		}

		cout << "#" << tc << " " << location[0] << " " << cnt << "\n";
	}
	return 0;
}

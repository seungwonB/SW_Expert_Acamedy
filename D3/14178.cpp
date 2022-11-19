#include<iostream>
#include<queue>
#include<string>
using namespace std;

int T, tc, N, D, cnt, temp, sum;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N >> D;
		temp = D * 2 + 1;

		cnt = 0, sum = 0;
		while (sum < N) {
			sum += temp;
			cnt++;
		}

		cout << "#" << tc << " " << cnt << "\n";
	}
}

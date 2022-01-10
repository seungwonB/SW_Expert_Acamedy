#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test_case, T;
	cin >> T;
	int a, b, c, d;
	for (test_case = 1; test_case <= T; test_case++) {
		cin >> a >> b >> c >> d;
		int res = min(b, d) - max(a, c);
		if (res < 0) {
			res = 0;
		}
		cout << "#" << test_case << " " << res << "\n";
	}
	return 0;
}


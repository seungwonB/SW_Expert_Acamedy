#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int tc, T, k, N, cnt, tmp;
vector<int> v;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;
		tmp = N;
		k = 2, cnt = 0;

		while (v.size() != 10) {
			for (int i = 0; i < to_string(N).size(); i++) {
				v.push_back(to_string(N)[i] - '0');
				// 중복제거
				sort(v.begin(), v.end());
				v.erase(unique(v.begin(), v.end()), v.end());
			}
			N = tmp * k;
			cnt++;
			k++;
		}

		cout << "#" << tc << " " << cnt*tmp << "\n";
		v.clear();
	}
	return 0;
}

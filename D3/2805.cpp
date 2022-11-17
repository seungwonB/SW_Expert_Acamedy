#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int tc, T, answer, N, total_profit;

int main() {
	cin >> T;
	for (tc = 1; tc <= T; tc++) {
		cin >> N;
		total_profit = 0;
		int farm[49][49];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				scanf("%1d", &farm[i][j]);
			}
		}

		int middle = N / 2;
			
		// 상단 삼각형(가운데 포함)
		for (int i = 0; i <= middle; i++) {
			for (int j = middle - i; j <= middle + i; j++) {
				total_profit += farm[i][j];
			}
		}

		// 하단 삼각형
		for (int i = 1; i <= middle; i++) {
			for (int j = i; j < N - i; j++) {
				total_profit += farm[i + middle][j];
			}
		}

		cout << "#" << tc << " " << total_profit << "\n";
	}
}

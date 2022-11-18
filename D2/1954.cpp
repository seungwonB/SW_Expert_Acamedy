#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int tc, T, N, num;
int arr[100][100] = { 0, };

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;

		num = 1;
		// 규칙 : N/2 + 1번 반복해서 진행된다.
		for (int r = 0; r < N / 2 + 1; r++) {
			// 위
			for (int i = r; i < N - r; i++) {
				arr[r][i] = num++;
			}
		
			// 우
			for (int i = r + 1; i < N - r; i++) {
				arr[i][N - r - 1] = num++;
			}

			// 아래
			for (int i = N - r - 2; i >= r; i--) {
				arr[N - r - 1][i] = num++;
			}

			// 좌
			for (int i = N - r - 2; i > r; i--) {
				arr[i][r] = num++;
			}
		}

		cout << "#" << tc << " " << "\n";
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}


	}
	return 0;
}

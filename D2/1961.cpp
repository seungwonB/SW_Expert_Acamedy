#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, N;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;

		int arr[8][8];
		int copy_arr[8][8];
		string answer[8][8] = { "", };

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		for (int r = 0; r < 3; r++) { // 90, 180, 270 �̱� ������ �� 3�� ȸ��
			for (int i = 0; i < N; i++) {
				for (int j = 0, k = N - 1; j < N, k >= 0; j++, k--) {
					copy_arr[i][j] = arr[k][i]; // 90�� ȸ��
				}
			}
			copy(&copy_arr[0][0], &copy_arr[0][0] + 8 * 8, &arr[0][0]); // arr�� copy_arr�� deep copy

			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					answer[i][r] += to_string(copy_arr[i][j]);
				}
			}
		}

		cout << "#" << tc << "\n";
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << answer[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

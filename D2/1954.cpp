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
		// ��Ģ : N/2 + 1�� �ݺ��ؼ� ����ȴ�.
		for (int r = 0; r < N / 2 + 1; r++) {
			// ��
			for (int i = r; i < N - r; i++) {
				arr[r][i] = num++;
			}
		
			// ��
			for (int i = r + 1; i < N - r; i++) {
				arr[i][N - r - 1] = num++;
			}

			// �Ʒ�
			for (int i = N - r - 2; i >= r; i--) {
				arr[N - r - 1][i] = num++;
			}

			// ��
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

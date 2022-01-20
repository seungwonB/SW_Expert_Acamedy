#include <cstdio>

int GetCnt(int case_value) {
	int cnt = 0;
	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = 0;
	}

	while (true) {
		if (case_value == 0) break;

		for (int i = 0; i < 10; i++) {
			if (case_value % 10 == i)
				arr[i]++;
		}
		case_value /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] >= 1) cnt++;
	}

	return cnt;
}

int main() {
	int test_case, T, case_value;
	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++) {
		scanf("%d", &case_value);

		printf("#%d %d\n", test_case, GetCnt(case_value));
	}

	return 0;
}

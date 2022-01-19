#include <cstdio>

int GetDivisor(int in_test_case) {
	int min = 1000000, max = 2, value;

	for (int i = 0; i < in_test_case; i++) {
		scanf("%d", &value);

		if (max < value) max = value;
		if (min > value) min = value;
	}

	return min * max;
}

int main() {
	int test_case, T, in_test_case;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++) {
		scanf("%d", &in_test_case);

		printf("#%d %d\n", test_case, GetDivisor(in_test_case));
	}

	return 0;
}

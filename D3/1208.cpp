#include <cstdio>
#define WIDTH 100

int main() {
	int test_case, dump_case, value, min, max;

	for (test_case = 1; test_case <= 10; test_case++) {
		scanf("%d", &dump_case);

		int heights[101] = { 0, };
		max = 1;
		min = 100;
		for (int i = 0; i < WIDTH; i++) {
			scanf("%d", &value);
			heights[value] += 1;
			if (max < value)
				max = value;

			if (min > value)
				min = value;
		}

		for (int i = 0; i < dump_case; i++) {
			heights[max] -= 1;
			heights[max - 1] += 1;

			heights[min] -= 1;
			heights[min + 1] += 1;

			if (heights[max] == 0) max -= 1;
			if (heights[min] == 0) min += 1;

			if (min >= max) break;
		}

		printf("#%d %d\n", test_case, max - min);
	}
	return 0;
}

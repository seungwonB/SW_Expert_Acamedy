#include <cstdio>
#include <algorithm>

using namespace std;

int test_case, T;

double GetMaxLevel(int lectures, int canWatch) {
	double sum = 0.0;
	int levelOfLectures[lectures];

	for (int i = 0; i < lectures; i++) {
		scanf("%d", &levelOfLectures[i]);
	}
	sort(levelOfLectures, levelOfLectures + lectures);

	for (int i = lectures - canWatch; i < lectures; i++) {
		sum = (levelOfLectures[i] + sum) / 2;
	}

	return sum;
}

int main() {
	scanf("%d", &T);
	int lectures, canWatch;

	for (test_case = 1; test_case <= T; test_case++) {
		scanf("%d %d", &lectures, &canWatch);

		printf("#%d %f\n", test_case, GetMaxLevel(lectures, canWatch));
	}
}

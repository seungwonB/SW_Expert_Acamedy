#include <cstdio>

int main() {
	int test_case, T;
	int maxTime, minTime, realTime;
	int res;
	
	scanf("%d", &T);
	
	for(test_case = 1; test_case <= T; test_case++) {
		scanf("%d %d %d", &minTime, &maxTime, &realTime);
		
		if (minTime < realTime && realTime < maxTime) {
			res = 0;	
		} else if (minTime > realTime) {
			res = minTime - realTime;
		} else if (maxTime < realTime) {
			res = -1;
		}
		printf("#%d %d\n", test_case, res);
	}
	return 0;
}

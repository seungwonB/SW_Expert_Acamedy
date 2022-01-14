#include <cstdio>

using namespace std;

int main() {
	int test_case, T;
	scanf("%d", &T);
	int N, sum, res, cnt;
	
	for(test_case = 1; test_case <= T; test_case++) {
		scanf("%d", &N);
		sum = cnt = 0;
		int income[N];
		for(int i = 0; i < N; i++) {
			scanf("%d", &income[i]);
			sum += income[i];
		}
		res = sum / N;
		for(int i = 0; i < N; i++) {
			if (income[i] <= res)
				cnt++;
		}
		printf("#%d %d\n", test_case, cnt);
	}
	
	return 0;
}

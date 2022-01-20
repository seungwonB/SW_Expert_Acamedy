#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int tc, T, str_length, cnt;
	char answer[100000], user[100000];
	scanf("%d", &T);

	for (tc = 1; tc <= T; tc++) {
		scanf("%d", &str_length);
		scanf("%s %s", answer, user);
		cnt = 0;
		for (int i = 0; i < str_length; i++) {
			if (answer[i] == user[i]) cnt++;
		}
		printf("#%d %d\n", tc, cnt);
	}
	return 0;
}

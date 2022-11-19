#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, cnt;
string answer;
char chess[8][8];

void bfs(int x, int y) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chess[x][j] == 'O' && j != y)  // 같은 열
				answer = "no";
			else if (chess[j][y] == 'O' && j != x)  // 같은 행
				answer = "no";
		}
	}
}

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {		
		answer = "yes";
		
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> chess[i][j];
			}
		}

		cnt = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (chess[i][j] == 'O') {
					bfs(i, j);					
					cnt++; // 룩이 8개인지 세기
				}
			}
		}

		cout << "#" << tc << " ";
		if (cnt == 8 && answer == "yes")
			cout << answer << "\n";
		else
			cout << "no" << "\n";
	}
	return 0;
}

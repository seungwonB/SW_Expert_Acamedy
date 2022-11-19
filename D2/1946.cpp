#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;

int tc, T, N, cnt, k;
int num[11];
char alpha[11];

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> alpha[i] >> num[i];
		}
		
		cout << "#" << tc << "\n";

		k = 0, cnt = 0;
		for (int w = 0; w < N; w++) {
			for (int i = 0; i < num[w]; i++) {
				cout << alpha[k]; 
				cnt++; // 10번 출력하는지 체크
				if (cnt == 10) { // 10번 출력하면 줄바꿈
					cout << "\n";
					cnt = 0;
				}
			}
			k++;
		}
		cout << "\n";
	}
	return 0;
}	

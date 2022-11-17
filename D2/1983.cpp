#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int tc, T, answer, students, std_idx, a, b, c;
double answer;
string grades[] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };

int main() {
	cin >> T;
	for (tc = 1; tc <= T; tc++) {
		cin >> students >> std_idx;
		double scores[100];

		for (int i = 0; i < students; i++) {
			cin >> a >> b >> c;
			scores[i] = a * 0.35 + b * 0.45 + c * 0.2;
		}

		answer = scores[std_idx - 1]; // �˻����ϴ� �л��� ����
		sort(scores, scores + students, greater<>()); // �������� ����

		for (int i = 0; i < students; i++) {
			if (scores[i] == answer) // �л����� �ε��� ã��
				std_idx = i;
		}
		int m = students / 10; 

		cout << "#" << tc << " " << grades[std_idx / m] << "\n";
	}
}

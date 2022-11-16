#include <cstdio>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int T, test_case, N, cnt, i;
long long x, maxNum, sum, answer;
vector<int> v;

void input_price() {
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
}

void hoarding() {
	while (!v.empty()) {
		if (maxNum != v[i]) {
			sum += v[i];
			cnt++;
			i++;
		}
		else {
			answer += maxNum * cnt - sum;
			v.erase(v.begin(), v.begin() + i + 1);
			sum = 0, cnt = 0, i = 0;
			if (!v.empty())
				maxNum = *max_element(v.begin(), v.end());
		}
	}
}

int main() {
	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {
		cin >> N;

		input_price(); // ���� �Է� �ޱ�

		maxNum = *max_element(v.begin(), v.end()); // �ִ밪 ã�Ƴ���
		sum = 0, cnt = 0, answer = 0, i = 0; // �ʱ�ȭ

		hoarding(); // �����
		
		cout << "#" << test_case << " " << answer << "\n";
		v.clear();
	}
	return 0;
}

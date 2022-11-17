#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int N, cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		string str = to_string(i);
		cnt = 0;력 
		// 문자열에 3,6,9가 있으면 있는 만큼 cnt++ 
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == "3"[0] || str[j] == "6"[0] || str[j] == "9"[0]) {
				cnt++;
			}
		}
		// cnt만큼 - 출 
		if (cnt >= 1) {
			for (int i = 0; i < cnt; i++)
				cout << "-";
			cout << " ";
		}
		else {
			cout << i << " ";
		}

	}
}

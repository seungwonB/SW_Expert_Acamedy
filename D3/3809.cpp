#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int tc, T, N, key;
char ch;
string str;

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;
		str = "";

		for (int i = 0; i < N; i++) {
			cin >> ch; // ���ڷ� �Է� �޾�
			str += ch; // ���ڿ��� ����
		}

		key = 0;
		while (1) { 
			if (str.find(to_string(key)) == string::npos) { // find�ߴµ� ���� ��� 
				break;
			}
			key++;
		}

		cout << "#" << tc << " " << key << "\n";
	}
	return 0;
}

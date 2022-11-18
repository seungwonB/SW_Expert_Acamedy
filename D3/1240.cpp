#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int tc, T, N, M, sum_code, last_i, last_j, odd, even, total_sum;
string scanner[] = { "0001101", "0011001", "0010011", "0111101", "0100011", "0110001",
					"0101111", "0111011", "0110111", "0001011" };
vector<string> v;
string arr[56];
string passwordCode, realNumberCode;

void input() {
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
}

void findLastOne() {
	last_i = 0, last_j = 0;

	for (int i = N - 1; i >= 0; i--) {
		for (int j = M - 1; j >= 0; j--) {
			if (arr[i][j] == "1"[0]) { // 1�� ã���� ����
				last_i = i;
				last_j = j;
				break;
			}
		}
		if (last_i != 0)
			break;
	}
}

void findPasswordCode() {
	passwordCode = "";

	// 1�ٸ� ã���� ��. 56���� ����
	for (int i = last_i; i >= last_i; i--) {
		for (int j = last_j; j > last_j - 56; j--) { 
			passwordCode += arr[i][j]; // 
		}
	}
}

void splitPasswordCode() {
	string temp = "";

	// 56���� 7���� �߶� ����
	for (int i = 0; i < passwordCode.size(); i++) {
		if (temp.size() >= 7) {
			v.push_back(temp);
			temp = "";
		}
		temp += passwordCode[i];
	}
	v.push_back(temp);
}

void toRealCode() {
	realNumberCode = "";

	// ��ȣ�ڵ带 ���ڷ� ��ȯ
	for (auto loop : v) {
		for (int i = 0; i < 10; i++) {
			if (loop == scanner[i]) {
				realNumberCode += to_string(i);
			}
		}
	}
}

void isRealCode() {
	odd = 0, even = 0, total_sum = 0;

	for (int i = 0; i < realNumberCode.size(); i++) {
		if (i % 2 == 0) { // Ȧ������ 
			odd += realNumberCode[i] - '0';
		}
		else { // ¦������
			even += realNumberCode[i] - '0';
		}
		total_sum += realNumberCode[i] - '0'; // ���� ���� ���ϱ�
	}
}
void print() {
	cout << "#" << tc << " ";
	if ((3 * odd + even) % 10 == 0)
		cout << total_sum << "\n";
	else
		cout << 0 << "\n";
}

int main() {
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N >> M;

		input(); // �迭 �Է�
		findLastOne(); // �迭�� ������ 1 ã��
		findPasswordCode(); // 56���� ��ȣ�ڵ� ã��

		reverse(passwordCode.begin(), passwordCode.end()); // ���������� ã�ұ� ������ ���� ����
		splitPasswordCode(); // 56���� �ڵ� 7���� �ڸ���
		toRealCode(); // 7���� �ڵ带 ���� ���ڷ� �ٲٱ�
		isRealCode(); // ���ڷ� �� �ڵ尡 ��¥ ��ȣ�ڵ尡 �´��� Ȯ��
		print(); // ���

		v.clear();
	}
	return 0;
}

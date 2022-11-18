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
			if (arr[i][j] == "1"[0]) { // 1만 찾으면 종료
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

	// 1줄만 찾으면 됨. 56개의 숫자
	for (int i = last_i; i >= last_i; i--) {
		for (int j = last_j; j > last_j - 56; j--) { 
			passwordCode += arr[i][j]; // 
		}
	}
}

void splitPasswordCode() {
	string temp = "";

	// 56개를 7개씩 잘라서 보관
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

	// 암호코드를 숫자로 변환
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
		if (i % 2 == 0) { // 홀수끼리 
			odd += realNumberCode[i] - '0';
		}
		else { // 짝수끼리
			even += realNumberCode[i] - '0';
		}
		total_sum += realNumberCode[i] - '0'; // 숫자 전부 더하기
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

		input(); // 배열 입력
		findLastOne(); // 배열의 마지막 1 찾기
		findPasswordCode(); // 56개의 암호코드 찾기

		reverse(passwordCode.begin(), passwordCode.end()); // 마지막부터 찾았기 때문에 역순 정렬
		splitPasswordCode(); // 56개의 코드 7개씩 자르기
		toRealCode(); // 7개의 코드를 보며 숫자로 바꾸기
		isRealCode(); // 숫자로 된 코드가 진짜 암호코드가 맞는지 확인
		print(); // 출력

		v.clear();
	}
	return 0;
}

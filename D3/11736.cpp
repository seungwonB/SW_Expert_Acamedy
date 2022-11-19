#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int T, tc, N, cnt;
int arr[20];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		
		cnt = 0;
		for (int i = 1; i < N - 1; i++) {
			if ((arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) || (arr[i - 1] > arr[i] && arr[i] < arr[i + 1]))
				continue;
			else
				cnt++;
		}

		cout << "#" << tc << " " << cnt << "\n";
	}
}

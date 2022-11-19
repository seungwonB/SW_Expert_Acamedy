#include<iostream>
#include<queue>
#include<string>
#define MAX 51
using namespace std;

char arr[MAX][MAX];
int T, tc, N, M;
string str;

int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };

string bfs(queue<pair<int, int>> &q) {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue; 

			if (arr[y][x] == arr[ny][nx]) 
				return "impossible"; 

			if (arr[ny][nx] != '?') 
				continue; 

			if (arr[y][x] == '#') 
				arr[ny][nx] = '.';
			else 
				arr[ny][nx] = '#';
			
			q.push({ ny, nx });
		}
	}
	return "possible";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;

	for (tc = 1; tc <= T; tc++) {
		queue<pair<int, int>> q;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> str;
			for (int j = 0; j < M; j++) {
				arr[i][j] = str[j];
				if (arr[i][j] == '#' || arr[i][j] == '.') 
					q.push({ i, j });
			}
		}
		string answer;
		answer = bfs(q);
		cout << "#" << tc << " " << answer << "\n";
	}
}

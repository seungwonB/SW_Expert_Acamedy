#include <iostream>
#define MAX 8
using namespace std;

char arr[MAX][MAX];

void inPut() {
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++) {
			cin >> arr[i][j];
		}
	}	
}

int palindrome(int length) {
	int cnt = 0;
	bool flag;
	int start, end;
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j <= MAX - length; j++) {
			check = true;
			for(int k = 0; k < length / 2; k++) {
				if ( arr[i][j + k] != arr[i][j + length - k - 1] ) 
					check = false;
			}
			if (check == true) cnt++;
			check = true;
			
			for(int k = 0; k < length / 2; k++) {
				if ( arr[j + k][i] != arr[j + length - k - 1][i])
					check = false;
			}
			if (check == true) cnt++;
		}		
	}
}

int main(void) {
	int test_case;
	int length, res;
		
	for(test_caes = 1; test_case <= 10; test_case++) {
		cin >> length;
		
		inPut(); // 배열 입력  
		
		int res = palindrome(length); 
					
		cout << "#" << i << " " << res << "\n";
		
	}
	return 0;
}

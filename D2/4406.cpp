#include <iostream>

using namespace std;

int main() {
    int test_case, T;
    cin >> T;
    string str;
    string answer = "";
    for(test_case = 1; test_case <= T; test_case++) {
    	cin >> str;
        
        for(int i = 0; i < str.length(); i++) {
        	if ( str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            	answer += str[i];
            }
        }
        
        cout << "#" << test_case << " " << answer << "\n";
        answer = "";
    }

	return 0;
}

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  	int number; // 테스트 케이스 번호
    int cnt; // 총 개수
    int size; // 검색 단어 길이
    string search; // 검색 단어
    string str; // 단어
    
    for(int i=0;i<10;i++) {
    	cin >> number; 
        cin >> search;
        cin >> str;
        cnt = 0;
        size = search.size();
        
        for(int k=0;k< str.size(); k++) {
            if (search == str.substr(k, size)) { 
                cnt++;
                k += size - 1; // 찾은 곳 다음부터 다시 검색
            }          	
        }
    	cout << "#" << i+1 << " " << cnt << "\n";
    }

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  	int number; // �׽�Ʈ ���̽� ��ȣ
    int cnt; // �� ����
    int size; // �˻� �ܾ� ����
    string search; // �˻� �ܾ�
    string str; // �ܾ�
    
    for(int i=0;i<10;i++) {
    	cin >> number; 
        cin >> search;
        cin >> str;
        cnt = 0;
        size = search.size();
        
        for(int k=0;k< str.size(); k++) {
            if (search == str.substr(k, size)) { 
                cnt++;
                k += size - 1; // ã�� �� �������� �ٽ� �˻�
            }          	
        }
    	cout << "#" << i+1 << " " << cnt << "\n";
    }

	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}

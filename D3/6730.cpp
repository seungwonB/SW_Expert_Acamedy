#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case; // �׽�Ʈ ���̽� ����
    cin >> test_case; 
    int num; // ���� ����
    int max_up, max_down;
     
    for(int i=1; i<=test_case; i++) {
        cin >> num;
        int arr[num]; // ���� ����
         
        for(int j=0;j<num;j++){
            cin >> arr[j]; // ���� ���� ����
        }
         
        max_up = max_down = 0;
         
        for(int j=0;j<num - 1;j++){ // ���̰� ����
            if ( arr[j] - arr[j+1] <= 0 ) {
                if ( max_up > arr[j] - arr[j+1] )
                    max_up = arr[j] - arr[j+1];
            } else {
                if ( max_down < arr[j] - arr[j+1] )
                    max_down = arr[j] - arr[j+1];
            }     
        }
         
        cout << "#" << i << " " << max_up*-1 << " " << max_down << "\n";
    }
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}

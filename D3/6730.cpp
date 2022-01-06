#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case; // 테스트 케이스 개수
    cin >> test_case; 
    int num; // 벽돌 개수
    int max_up, max_down;
     
    for(int i=1; i<=test_case; i++) {
        cin >> num;
        int arr[num]; // 벽돌 높이
         
        for(int j=0;j<num;j++){
            cin >> arr[j]; // 벽돌 높이 저장
        }
         
        max_up = max_down = 0;
         
        for(int j=0;j<num - 1;j++){ // 차이값 저장
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
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

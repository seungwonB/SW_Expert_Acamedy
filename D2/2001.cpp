#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int M, N;
    int max;
    int sum;
    cin >> test_case;
     
    for(int i = 1; i <= test_case; i++) {
        cin >> N >> M;
        max = 0;
        int arr[N][N];
         
        for(int j=0; j<N;j++) {
            for(int k=0;k<N;k++) {
                cin >> arr[j][k];
            }
        }
         
        int rep = (N + 1) - M;
        for(int m = 0; m < rep; m++) {
            for(int n = 0; n < rep; n++) {
                sum = 0;
                for(int w = 0; w < M; w++) {
                    for(int e = 0; e < M; e++) {
                        sum += arr[w+m][e+n];
                    }
                }
                if ( max < sum ) max = sum;
            }
        }
        cout << "#" << i << " " << max << "\n";
    }
 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

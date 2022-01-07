#include<cstdio>
using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    scanf("%d", &test_case);
	int c;
	for(int z=1;z<=test_case;z++) {
        scanf("%d", &c);
        int arr[c][c];
        printf("#%d\n", z);
        for(int i=0;i<c;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = 0;
            }
        }
        for(int i=0;i<c;i++) {
            arr[i][i] = 1;
            arr[i][0] = 1;
            for(int j=0;j<=i;j++) {
                if ( i == 0 || j == 0)
                    arr[i][j] = 1;
                else if ( (arr[i-1][j-1] && arr[i-1][j]) != NULL )  {
                    arr[i][j] = (arr[i-1][j-1] + arr[i-1][j]); 
                }			
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }	
    }
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

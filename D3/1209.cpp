#include <cstdio>
#define MAX 100
 
using namespace std;
 
int main() {
    int test_case, test_number, sum, sum_max;
 
    for (test_case = 1; test_case <= 10; test_case++) {
        scanf("%d", &test_number);
        int arr[MAX][MAX];
 
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
 
        sum_max = 0;
        for (int i = 0; i < MAX; i++) {
            sum = 0;
            for (int j = 0; j < MAX; j++) {
                sum += arr[i][j];
            }
            if (sum_max < sum) {
                sum_max = sum;
            }
        }
 
        for (int i = 0; i < MAX; i++) {
            sum = 0;
            for (int j = 0; j < MAX; j++) {
                sum += arr[j][i];
            }
            if (sum_max < sum) {
                sum_max = sum;
            }
        }
 
        printf("#%d %d\n", test_case, sum_max);
    }
 
    return 0;
}

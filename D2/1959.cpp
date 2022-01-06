#include <stdio.h>
  
int main(int argc, char** argv) {
  
    int testcase, n, m, x, shorter, difference, sum, max_value;
    int A[21] = { 0, }, B[21] = { 0, };
    scanf("%d", &testcase);
  
    for (int t = 1; t <= testcase; t++) {
        scanf("%d %d", &n, &m);
        max_value = 0;
  
        if (n < m) shorter = n, difference = m - n;
        else shorter = m, difference = n - m;
          
        for (int i = 0; i < n; i++)
            scanf("%d", &x), A[i] = x;
        for (int i = 0; i < m; i++)
            scanf("%d", &x), B[i] = x;
  
        for (int i = 0; i <= difference; i++) {
            sum = 0;
            for (int j = 0; j < shorter; j++) {
                if (n < m)
                    sum += A[j] * B[i + j];
                else
                    sum += A[i + j] * B[j];
            }
            if (sum > max_value)
                max_value = sum;
        }
        printf("#%d %d\n", t, max_value);
    }
    return 0;
}

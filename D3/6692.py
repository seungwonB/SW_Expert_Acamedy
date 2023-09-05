import sys

T = int(input())

for test_case in range(1, T + 1):
    N = int(input())
    answer = 0

    for i in range(0, N):
        tmp = input().split()
        p1 = float(tmp[0])
        x1 = int(tmp[1])

        answer += (p1 * x1)

    print(f'#{test_case} {answer:.6f}')

from itertools import combinations

T = int(input()) # 테케 입력

for i in range(1, T+1):
    arr = list(map(int, input().split())) # 7개 정수 입력
    combi_list = list(combinations(arr, 3)) # 조합만들기
    sum_three = []
    for c in combi_list:
        sum_three.append(sum(c))
    sum_three = list(set(sum_three))
    sum_three = sorted(sum_three, reverse=True)
    print(f'#{i} {sum_three[4]}')
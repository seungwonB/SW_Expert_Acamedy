import copy

T = int(input())
for tc in range(1, T+1):
    arr = [list(map(int, input().split())) for _ in range(9)]

    arr2 = copy.deepcopy(arr)
    result = 1
    
    # 가로
    for i in range(9):
        arr_col = list(set(arr2[i]))
        if len(arr_col) != 9:
            result = 0
            break

    # 세로
    for i in range(9):
        arr_col = []
        for j in range(9):
            arr_col.append(arr[j][i])
        arr_col = list(set(arr_col))
        if len(arr_col) != 9:
            result = 0
            break

    # 3x3 격자
    for i in range(3):
        for j in range(3):
            cnt_x = []
            for k in range(3):
                for l in range(3):
                    cnt_x.append(arr[3 * i + k][3 * j + l])
            cnt_x = list(set(cnt_x))
            if len(cnt_x) != 9:
                result = 0
                break

    print("#{} {}".format(tc, result))
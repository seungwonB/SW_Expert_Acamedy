T = int(input())

def checkWord(lst):
    global answer, temp

    for idx in range(len(lst)):
        if lst[idx] == temp:
            answer += 1


for tc in range(1, T+1):
    N, K = map(int, input().split())

    temp = "1" * K
    puzzle = [list(map(int, input().split())) for _ in range(N)]
    answer = 0

    # 가로
    for i in puzzle:
        col = ''.join(str(s) for s in i) # 리스트를 문자열로
        col = col.split('0') # ex) 11101 -> 111 1 로 됨

        checkWord(col)

    # 세로
    for i in range(N):
        row = ''
        for j in range(N):
            row += str(puzzle[j][i])
        row = row.split('0')

        checkWord(row)

    print("#{} {}".format(tc, answer))
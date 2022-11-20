T = int(input()) # 테케 입력

for i in range(1, T+1):
    num_str = input() # 숫자 N 입력
    num_list = sorted(list(num_str)) # 입력받은 N 정렬된 리스트로 만들기

    flag = False # 숫자가 같은지 체크
    k = 2 # 배수
    while True:
        multi_num = int(num_str) * k # 2N, 3N ... k*N
        if len(str(multi_num)) > len(num_str): # 만약 원래 길이보다 늘어나면 종료
            break

        if sorted(list(str(multi_num))) == num_list: # 배수와 원래 숫자의 구성이 같으면 종료
            flag = True
            break

        k += 1

    if flag:
        answer = "possible"
    else:
        answer = "impossible"

    print(f"#{i} {answer}")
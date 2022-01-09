#include <cstdio>
#include <queue>
#define MAX 8
using namespace std;
 
queue<int> que;
 
void inPutQueue() {
    int value; // Q에 삽입될 값 
    for(int i = 0; i < MAX; i++) {
        scanf("%d", &value);
        que.push(value);
    }   
}
 
void queueCycle() {
    int minus = 1; // 감소될 값 
    int temp;
    while(true) {
        temp = que.front() - minus; // 맨 앞 - minus; 
        que.pop(); // 값 추출 
        if (temp <= 0) { // 0이하일 경우 종료 
            que.push(0);
            break;
        }
        que.push(temp); // 뒤에 값 삽입 
        minus++; // 감소될 값 증가 
        if (minus > 5) minus = 1; // 5보다 크면 다시 1로        
    }   
}
 
void print(int test_case){
    printf("#%d\n", test_case);
    while(!que.empty()) {
        printf("%d ", que.front());
        que.pop();
    }   
    printf("\n");   
}
 
int main(void) {
    int test_case, number;
    int temp;
    for(test_case = 1; test_case <= 10; test_case++) {
        scanf("%d", &number);
         
        inPutQueue(); // Q에 값 삽입 
         
        queueCycle();
        print(test_case);
    }
    return 0;
}

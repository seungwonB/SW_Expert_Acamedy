#include <cstdio>
#include <queue>
#define MAX 8
using namespace std;
 
queue<int> que;
 
void inPutQueue() {
    int value; // Q�� ���Ե� �� 
    for(int i = 0; i < MAX; i++) {
        scanf("%d", &value);
        que.push(value);
    }   
}
 
void queueCycle() {
    int minus = 1; // ���ҵ� �� 
    int temp;
    while(true) {
        temp = que.front() - minus; // �� �� - minus; 
        que.pop(); // �� ���� 
        if (temp <= 0) { // 0������ ��� ���� 
            que.push(0);
            break;
        }
        que.push(temp); // �ڿ� �� ���� 
        minus++; // ���ҵ� �� ���� 
        if (minus > 5) minus = 1; // 5���� ũ�� �ٽ� 1��        
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
         
        inPutQueue(); // Q�� �� ���� 
         
        queueCycle();
        print(test_case);
    }
    return 0;
}

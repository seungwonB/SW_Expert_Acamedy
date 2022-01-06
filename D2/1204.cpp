#include<cstdio>
 
int main(int argc, char** argv)
{
    int test_case;
    int number;
 
    int students[1000];
    int max;
    scanf("%d", &test_case);
     
    for(int i=0;i<test_case; i++) {
        int score[101] = { 0 };
        scanf("%d", &number); // 번호 입력
         
        for(int j=0;j<1000; j++) {
            scanf("%d", &students[j]); // 학생 점수 입력
            score[students[j]]++;
        }
         
     
         
        max = score[0];
        int temp;
        for(int j=0;j<101;j++) {
            if (max <= score[j]){
                max = score[j];
                temp = j;
            }
        }
        printf("#%d %d\n", number, temp);
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

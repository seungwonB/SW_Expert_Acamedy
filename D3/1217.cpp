#include<cstdio>
 
int main(int argc, char** argv)
{
    int num;
    int v1, v2;
    int sum;
    for(int i=0;i<10;i++){
        sum = 1;
        scanf("%d", &num);
         
        scanf("%d%d", &v1, &v2);
         
        for(int j=1;j<=v2;j++) {
            sum *= v1;
        }
        printf("#%d %d\n", num, sum);
    }
     
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

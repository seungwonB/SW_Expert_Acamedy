#include<cstdio>
#define max(a, b) ((a)>(b)?(a):(b))
 
using namespace std;
 
int main(int argc, char** argv)
{
    int buildings[1000] = { 0, }; // ºôµù
    int res, sum, width;
    for(int i=1;i<=10;i++) {
        scanf("%d", &width);
        for(int j=0; j<width;j++) {
            scanf("%d", &buildings[j]);
        }
        sum = 0;
        for(int j=2; j < width-2; j++) {
            res = max(buildings[j-2], buildings[j-1]);
            res = max(res, buildings[j+1]);
            res = max(res, buildings[j+2]);
            if ( buildings[j] > res )
                sum += buildings[j] - res;
        }
        printf("#%d %d\n", i, sum);
    }
    return 0;
}

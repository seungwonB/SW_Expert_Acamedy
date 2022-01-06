#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int num;
    cin >> num;
    int P, Q, R, S, W;
    int a, b;
    int res;
     
    for(int i=1;i<=num;i++){
        cin >> P >> Q >> R >> S >> W;
        a = P * W;
 
        if ( W <= R ) {
            b = Q;
        } else {
            W -= R;
            b = W * S + Q;
        }
        res = ( a < b ) ? a : b;
        cout << "#" << i << " " << res << "\n";
    }
 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

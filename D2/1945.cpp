#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int num;
    cin >> num;
    int value;
    int c1,c2,c3,c4,c5;
     
     
    for(int i=1;i<=num;i++) {
        cin >> value;
        c1 = c2 = c3 = c4 = c5 = 0;
        while (value % 2 == 0) {
            value /= 2;
            c1++;
        }
        while (value % 3 == 0) {
            value /= 3;
            c2++;
        }
        while (value % 5 == 0) {
            value /= 5;
            c3++;
        }
        while (value % 7 == 0) {
            value /= 7;
            c4++;
        } 
        while (value % 11 == 0) {
            value /= 11;
            c5++;
        }
         
        cout << "#" << i << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

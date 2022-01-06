#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int num;
    cin >> num;
    int value;
    int temp;
     
    for(int i=1;i<=num;i++){
        int sum = 0;
        cin >> value;
     
        for(int j=1;j<=value;j++){
            if(j%2==0){ 
                temp = j * (-1);
            } else {
                temp = j;
            }
            sum += temp;
        }
         
        cout << "#" << i << " " << sum << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

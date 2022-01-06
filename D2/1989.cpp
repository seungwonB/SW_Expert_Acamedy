#include<iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main(int argc, char** argv)
{
int num;
    string s;
    cin >> num;
    string a;
    int res;
     
    for(int i=1;i<=num;i++){
        cin >> s;
        a = s;
         
        reverse(s.begin(), s.end());
         
        if(a.compare(s)==0) res = 1;
        else res = 0;
        cout << "#" << i << " " << res << "\n";
    }
 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

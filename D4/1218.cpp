#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;
 
int test_case;
bool flag;
 
void checkBalance(int test_length, string str) {
    flag = true;
    stack<char> s;
 
    for (int i = 0; i < test_length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<') {
            s.push(str[i]);
        }
        else if (str[i] == ')') {
            if (!s.empty() && s.top() == '(')
                s.pop();
            else
                flag = false;
        }
        else if (str[i] == ']') {
            if (!s.empty() && s.top() == '[')
                s.pop();
            else
                flag = false;
        }
        else if (str[i] == '}') {
            if (!s.empty() && s.top() == '{')
                s.pop();
            else
                flag = false;
        }
        else if (str[i] == '>') {
            if (!s.empty() && s.top() == '<')
                s.pop();
            else
                flag = false;
        }
    }
 
    printf("#%d ", test_case);
    if (flag && s.empty())
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
}
 
 
 
int main() {
    int test_length;
    string str;
 
    for (test_case = 1; test_case <= 10; test_case++) {
        scanf("%d", &test_length);
        cin >> str;
 
        checkBalance(test_length, str);
    }
}

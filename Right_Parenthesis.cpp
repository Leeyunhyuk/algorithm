#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> stk;
    
    // 첫 문자가 ) 이면 실패
    if(s[0] == ')') return false;
    
    // '('가 ')' 전 선제적으로 와야한다. stack 자료구조 사용.
    for (auto cha : s){
        if(cha == '(') stk.push(1);
        else if (stk.size() == 0 && cha == ')') return false;
        else stk.pop();      
    }
    
    if (stk.empty()) return true;
    else return false;
    
}
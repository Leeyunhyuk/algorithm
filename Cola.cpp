#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a){
        int val = n/a;
        int rest = n%a;
        
        answer += val*b;
        
        n = val*b + rest;
    }
    
    return answer;
}
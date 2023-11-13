#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    //answer의 0 이전 값 구하기
    for(int i=1; i<food.size(); i++){
        int temp = food[i];
        while(temp > 1){
            answer += to_string(i);
            temp -= 2;
        }
    }
    
    // reverse할 string 정의 및 reverse
    string reversed = answer;
    reverse(reversed.begin(),reversed.end());
    
    answer = answer + '0' + reversed;
    
    return answer;
}
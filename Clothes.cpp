#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    unordered_map<string, int> map;

    // 종류 별 옷 갯수
    for(auto cloth : clothes){
        map[cloth[1]]++;
    }

    // 모든 경우의 수 구하기
    for(auto pair : map){
        answer *= pair.second + 1;
    }

    // 옷을 안입는 경우 제회
    answer = answer - 1;
    
    return answer;
}
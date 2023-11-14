#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> map1;
    
    //map에서 검색. 없는 경우 -1 후 해당 위치 value 저장, 있는 경우 기존 경로와 해당 위치 차 value 저장
    for(int i=0; i<s.size(); i++){
        if(map1.count(s[i])){
            answer.push_back(i-map1[s[i]]);
            map1[s[i]] = i;
        }else{
            answer.push_back(-1);
            map1[s[i]] = i;
        }
    }
    
    return answer;
}
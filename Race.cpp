#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    vector<string> answer(players); 
    map<string, int> m1;
    
    for (int i = 0; i < players.size(); i++) {
        m1[players[i]] = i;
    }
    
    for(int i=0;i<callings.size();i++){
        
        // 호출된 선수의 변경 전 순위
        int locate = m1[callings[i]];
        
        // map에 저장된 순위 갱신
        m1[answer[locate-1]] +=1;
        m1[callings[i]] -=1;
        
        // answer에 저장된 순서 변경
        string tmp = answer[locate];
        answer[locate] = answer[locate-1];
        answer[locate-1] = tmp;
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    // 정렬
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    // 참가자와 완주자 명단 비교 같으면 넘어가기.
    for(int i=0; i<completion.size(); i++){
        if (participant[i] == completion[i]){
            continue;
        }else return participant[i]; // 끝 까지 같을경우 마지막 참가자가 미완주
    }
    
    answer = participant.back();

    return answer;
}
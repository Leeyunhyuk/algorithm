#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ranking(int cor){
    if(cor == 6) return 1;
    else if(cor == 5) return 2;
    else if(cor == 4) return 3;
    else if(cor == 3) return 4;
    else if(cor == 2) return 5;
    else return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int cor=0;
    int not_sure=0;
    for(int i=0; i<6; i++){
        //확실한 정답
        if(find(win_nums.begin(),win_nums.end(),lottos[i]) != win_nums.end()){
            cor = cor+1;
        // 가려진 번호
        }else if(lottos[i] ==0){
            not_sure = not_sure+1;
        }
    }
    
    answer.push_back(ranking(cor+not_sure));
    answer.push_back(ranking(cor));
    
    return answer;
}
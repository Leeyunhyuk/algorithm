#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    for(auto val : score){
        temp.push_back(val);
        sort(temp.begin(),temp.end());
        if(temp.size() > k){
            temp.erase(temp.begin());
        }
        answer.push_back(temp.front());
    }
    return answer;
}
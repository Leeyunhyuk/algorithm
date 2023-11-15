#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    vector<int> temp_vec;
    
    // 기존 temp_long을 int형으로 진행시 coredump 발생.
    for(int i=0; i<=t.length()-p.length(); i++){
        string temp = t.substr(i,p.length());
        long temp_long = stol(temp);
        
        if (temp_long <= stol(p)) answer++;
    }
    
    return answer;
}

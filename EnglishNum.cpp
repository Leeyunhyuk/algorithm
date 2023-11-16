#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> eng_num = {"one","two","three","four","five","six","seven","eight","nine","zero"};
    vector<string> num_num = {"1","2","3","4","5","6","7","8","9","0"};
    
    for(int i=0; i<10; i++){
        s = regex_replace(s,regex(eng_num[i]),num_num[i]);
    }
    
    answer = stoi(s);
    
    return answer;
}
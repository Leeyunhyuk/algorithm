#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> set1;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            set1.insert(numbers[i]+numbers[j]);
        }
    }
    
    for(auto val : set1) answer.push_back(val);
    
    sort(answer.begin(),answer.end());
    
    return answer;
}